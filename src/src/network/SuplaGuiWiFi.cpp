#include "SuplaGuiWiFi.h"
#include "../../SuplaDeviceGUI.h"

namespace Supla {

GUIESPWifi::GUIESPWifi(const char *wifiSsid, const char *wifiPassword) : ESPWifi(wifiSsid, wifiPassword) {
  retryCount = 0;
#ifdef ARDUINO_ARCH_ESP8266
  gotIpEventHandler = WiFi.onStationModeGotIP([](const WiFiEventStationModeGotIP &event) {
    (void)(event);
    Serial.print(F("local IP: "));
    Serial.println(WiFi.localIP());
    Serial.print(F("subnetMask: "));
    Serial.println(WiFi.subnetMask());
    Serial.print(F("gatewayIP: "));
    Serial.println(WiFi.gatewayIP());
    long rssi = WiFi.RSSI();
    Serial.print(F("Signal strength (RSSI): "));
    Serial.print(rssi);
    Serial.println(F(" dBm"));
  });
  disconnectedEventHandler = WiFi.onStationModeDisconnected([](const WiFiEventStationModeDisconnected &event) {
    (void)(event);
    Serial.println(F("WiFi station disconnected"));
  });
#else
  WiFiEventId_t event_gotIP = WiFi.onEvent(
      [](WiFiEvent_t event, WiFiEventInfo_t info) {
        Serial.print(F("local IP: "));
        Serial.println(WiFi.localIP());
        Serial.print(F("subnetMask: "));
        Serial.println(WiFi.subnetMask());
        Serial.print(F("gatewayIP: "));
        Serial.println(WiFi.gatewayIP());
        long rssi = WiFi.RSSI();
        Serial.print(F("Signal Strength (RSSI): "));
        Serial.print(rssi);
        Serial.println(F(" dBm"));
      },
      WiFiEvent_t::ARDUINO_EVENT_WIFI_STA_GOT_IP);
  (void)(event_gotIP);

  WiFiEventId_t event_disconnected = WiFi.onEvent([](WiFiEvent_t event, WiFiEventInfo_t info) { Serial.println(F("wifi Station disconnected")); },
                                                  WiFiEvent_t::ARDUINO_EVENT_WIFI_AP_STADISCONNECTED);
  (void)(event_disconnected);
#endif
}

GUIESPWifi::~GUIESPWifi() {
  delete[] client;
};

int GUIESPWifi::connect(const char *server, int port) {
  if (strcmp(server, DEFAULT_SERVER) == 0) {
    return 0;
  }

  String message;
  if (client == NULL) {
    if (isSecured) {
      message = "Secured connection";
      auto clientSec = new WiFiClientSecure();
      client = clientSec;

#ifdef ARDUINO_ARCH_ESP8266
      clientSec->setBufferSizes(2048, 512);  // EXPERIMENTAL
      if (fingerprint.length() > 0) {
        message += " with certificate matching";
        clientSec->setFingerprint(fingerprint.c_str());
      }
      else {
        message += " without certificate matching";
        clientSec->setInsecure();
      }
#elif ARDUINO_ARCH_ESP32
      clientSec->setInsecure();
#endif
    }
    else {
      message = "unsecured connection";
      client = new WiFiClient();
    }
  }

  int connectionPort = (isSecured ? 2016 : 2015);
  if (port != -1) {
    connectionPort = port;
  }

  supla_log(LOG_DEBUG, "Establishing %s with: %s (port: %d)", message.c_str(), server, connectionPort);

  bool result = client->connect(server, connectionPort);

  return result;
}

void GUIESPWifi::setup() {
  if (!wifiConfigured) {
    wifiConfigured = true;
    Serial.print(F("WiFi: establishing connection with SSID: \""));
    Serial.print(ssid);
    Serial.println(F("\""));

    WiFi.softAPdisconnect(true);
    WiFi.reconnect();
    WiFi.disconnect(true);

    if (ConfigESP->configModeESP == NORMAL_MODE) {
      WiFi.mode(WIFI_STA);
    }

    if (ssid)
      WiFi.begin(ssid, password);

    if (hostname) {
      WiFi.setHostname(hostname);
    }
  }
  else {
    if (ConfigESP->configModeESP == NORMAL_MODE) {
      Serial.println(F("WiFi: resetting WiFi connection"));
      if (client) {
        delete client;
        client = nullptr;
      }
      // WiFi.reconnect(); // This does not reset dhcp
      WiFi.disconnect();
      delay(200);  // do not remove, need a delay for disconnect to change status()

      retryCount++;
      if (retryCount > 4) {
        retryCount = 0;
        wifiConfigured = false;

        if (ConfigManager->get(KEY_FORCE_RESTART_ESP)->getValueBool())
          ConfigESP->rebootESP();
      }
    }
  }

  delay(0);
}

void GUIESPWifi::setHostName(const char *wifiHostname) {
  if (wifiHostname) {
    strncpy(hostname, wifiHostname, MAX_HOSTNAME);
  }
}

void GUIESPWifi::enableSSL(bool value) {
  isSecured = value;
  wifiConfigured = false;
  if (client) {
    delete client;
    client = nullptr;
  }
}

};  // namespace Supla
