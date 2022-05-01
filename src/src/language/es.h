#ifndef _LANGUAGE_ES_S_H_
#define _LANGUAGE_ES_S_H_

#define S_LANG "es"

// Translated by EñE Partycja Gajek-Nowrot
// Checked by elmaya

#define S_SETTING_FOR             "Configuraciones para"
#define S_SETTING_WIFI_SSID       "Configuración de WIFI"
#define S_WIFI_SSID               "Nombre WIFI"
#define S_WIFI_PASS               "Contraseña"
#define S_HOST_NAME               "Nombre de módulo"
#define S_SETTING_SUPLA           "Configuración SUPLA"
#define S_SUPLA_SERVER            "Dirección de servidor"
#define S_SUPLA_EMAIL             "Correo electrónico"
#define S_SETTING_ADMIN           "Datos de administrador"
#define S_LOGIN                   "Login"
#define S_LOGIN_PASS              "Contraseña"
#define S_ROLLERSHUTTERS          "Persianas"
#define S_SAVE                    "Guardar"
#define S_DEVICE_SETTINGS         "Configuración de dispositivo"
#define S_TOOLS                   "Instrumentos"
#define S_SAVE_CONFIGURATION      "Guardar configuración"
#define S_LOAD_CONFIGURATION      "Cargar configuración"
#define S_RESET_CONFIGURATION     "Restablecer la configuración del dispositivo"
#define S_RESTORE_FACTORY_SETTING "Restaurar la configuración de fábrica"
#define S_UPDATE                  "Actualización"
#define S_RESTART                 "Reiniciar"
#define S_RETURN                  "Volver"

#define S_TEMPLATE_BOARD "Modelos de placas"
#define S_TYPE                                                 "Tipo"
#define S_RELAYS                                               "RELÉS"
#define S_BUTTONS                                              "BOTONES"
#define S_SENSORS_1WIRE                                        "SENSORES 1Wire"
#define S_SENSORS_I2C                                          "SENSORES i2c"
#define S_SENSORS_SPI                                          "SENSORES SPI"
#define S_SENSORS_OTHER                                        "OTROS SENSORES"
#define S_LED_BUTTON_CFG                                       "LED, CONFIGURACIÓN DE BOTÓN"
#define S_CFG_MODE                                             "Modo"
#define S_QUANTITY                                             "CANTIDAD"
#define S_GPIO_SETTINGS_FOR_RELAYS                             "Parámetros GPIO para los relés"
#define S_RELAY                                                "RELÉ"
#define S_RELAY_NR_SETTINGS                                    "Configuración del relé no. "
#define S_STATE_CONTROL                                        "Control de estado"
#define S_REACTION_AFTER_RESET                                 "Reacción después de reinicio"
#define S_GPIO_SETTINGS_FOR_BUTTONS                            "Parámetros GPIO para los botones"
#define S_BUTTON                                               "BOTÓN"
#define S_BUTTON_NR_SETTINGS                                   "Parámetros del botón no. "
#define S_REACTION_TO                                          "Reacción a"
#define S_RELAY_CONTROL                                        "Control de relé"
#define S_ACTION                                               "Action"
#define S_GPIO_SETTINGS_FOR_LIMIT_SWITCH                       "Parámetros GPIO para el sensor de apertura"
#define S_LIMIT_SWITCH                                         "INTERRUPTOR DE LÍMITE"
#define S_GPIO_SETTINGS_FOR                                    "Parámetros GPIO para"
#define S_FOUND                                                "Encontrado"
#define S_NO_SENSORS_CONNECTED                                 "Falta de sensores conectados"
#define S_SAVE_FOUND                                           "Guardar encontrado"
#define S_TEMPERATURE                                          "Temperatura"
#define S_NAME                                                 "Nombre"
#define S_ALTITUDE_ABOVE_SEA_LEVEL                             "Altitud sobre el nivel del mar"
#define S_GPIO_SETTINGS_FOR_CONFIG                             "Parámetros GPIO para CONFIG"
#define S_SOFTWARE_UPDATE                                      "Actualización de software"
#define S_DATA_SAVED                                           "Datos guardados"
#define S_RESTART_MODULE                                       "Reinicio de módulo"
#define S_DATA_ERASED_RESTART_DEVICE                           "Datos borrados: reinicia el dispositivo"
#define S_WRITE_ERROR_UNABLE_TO_READ_FILE_FS_PARTITION_MISSING "Error de escritura: no se puede leer el archivo. Falta partición FS."
#define S_DATA_SAVED_RESTART_MODULE                            "Datos guardados: reinicio de módulo."
#define S_WRITE_ERROR_BAD_DATA                                 "Error de escritura: datos incorrectos."
#define S_SETTINGS_FOR                                         "Ustawienie dla"
#define S_ACTION_TRIGGER                                       "Wyzwalaczy akcji"

//#### SuplaConfigESP.cpp ####
#define S_STATUS_ALREADY_INITIALIZED     "Ya iniciado"
#define S_STATUS_INVALID_GUID            "Identificador GUID incorrecto"
#define S_STATUS_UNKNOWN_SERVER_ADDRESS  "Dirección de servidor desconocida"
#define S_STATUS_UNKNOWN_LOCATION_ID     "ID desconocido"
#define S_STATUS_INITIALIZED             "Iniciado"
#define S_STATUS_CHANNEL_LIMIT_EXCEEDED  "Límite de canal superado"
#define S_STATUS_SERVER_DISCONNECTED     "Desconectado"
#define S_STATUS_REGISTER_IN_PROGRESS    "Registro pendiente"
#define S_STATUS_PROTOCOL_VERSION_ERROR  "Error de versión de protocolo"
#define S_STATUS_BAD_CREDENTIALS         "Credenciales incorrectas"
#define S_STATUS_TEMPORARILY_UNAVAILABLE "Temporalmente no disponible"
#define S_STATUS_LOCATION_CONFLICT       "Conflicto de localización"
#define S_STATUS_CHANNEL_CONFLICT        "Conflicto de canales"
#define S_STATUS_REGISTERED_AND_READY    "Registrado y listo"
#define S_STATUS_DEVICE_IS_DISABLED      "Dispositivo desconectado"
#define S_STATUS_LOCATION_IS_DISABLED    "Localización está desactivada"
#define S_STATUS_DEVICE_LIMIT_EXCEEDED   "Superado límite de dispositivos"
#define S_STATUS_REGISTRATION_DISABLED   "Registro de dispositivos INACTIVO"
#define S_STATUS_MISSING_CREDENTIALS     "Falta dirección de correo electrónico"
#define S_STATUS_INVALID_AUTHKEY         "Falta AuthKey"
#define S_STATUS_NO_LOCATION_AVAILABLE   "¡No hay ubicación disponible!"
#define S_STATUS_UNKNOWN_ERROR           "Error de registro desconocido"
#define S_STATUS_NETWORK_DISCONNECTED    "Sin conexión a la red"

//#### SuplaCommonPROGMEM.h ####
#define S_OFF                           "APAGADO"
#define S_ON                            "ENCENDIDO"
#define S_TOGGLE                        "TOGGLE"
#define S_LOW                           "BAJO"
#define S_HIGH                          "ALTO"
#define S_POSITION_MEMORY               "RECORDAR ESTADO"
#define S_REACTION_ON_PRESS             "AL PRESIONAR"
#define S_REACTION_ON_RELEASE           "AL SOLTAR"
#define S_REACTION_ON_CHANGE            "AL CAMBIAR DE ESTADO"
#define S_CFG_10_PRESSES                "AL PRESIONAR 10 VECES"
#define S_5SEK_HOLD                     "AL MANTENER PRESIONADO 5 SEGUNDOS"
#define S_NORMAL                        "NORMAL"
#define S_SLOW                          "LENTO"
#define S_MANUALLY                      "A MANO"
#define S_ON_CH_VAL_OFF_HEATING         "ON > valor del cana l> OFF - calefacción"
#define S_ON_CH_VAL_OFF_COOLING         "ON < valor del canal < OFF - refrigeración"
#define S_ON_2CH_VAL_OFF_HUMIDIFICATION "ON > valor del segundo canal > OFF - humidificación"
#define S_ON_2CH_VAL_OFF_DRYING         "ON < valor del segundo canal < OFF - secado"

//#### SuplaWebServer.cpp ####
#define S_LIMIT_SWITCHES "FINALES DE CARRERA"
#define S_CORRECTION     "CORRECCIÓN PARA SENSORES"

//#### SuplaTemplateBoard.h ####
#define S_ABSENT "BRAK"

//#### SuplaWebPageSensor.cpp ####
#define S_IMPULSE_COUNTER                  "Contador de impulsos"
#define S_IMPULSE_COUNTER_DEBOUNCE_TIMEOUT "Límite de tiempo"
#define S_IMPULSE_COUNTER_RAISING_EDGE     "Flanco ascendente"
#define S_IMPULSE_COUNTER_PULL_UP          "Pull-up"
#define S_IMPULSE_COUNTER_CHANGE_VALUE     "Cambia el valor"
#define S_SCREEN_TIME                      "Pantalla [s]"
#define S_OLED_BUTTON                      "Botón OLED"
#define S_SCREEN                           "Pantalla"
#define S_BACKLIGHT_S                      "Luz de fondo [s]"
#define S_BACKLIGHT_PERCENT                "Brillo [%]"
#define S_ADDRESS                          "Dirección"

//#### SuplaWebPageUpload.cpp ####
#define S_GENERATE_GUID_AND_KEY "Generar GUID & AUTHKEY"
#define S_UPLOAD                "Subir"

//#### SuplaWebPageControl.cpp ####
#define S_SETTINGS_FOR_BUTTONS "Configuración de botones"
#define S_REVERSE_LOGIC        "Lógica inversa"
#define S_INTERNAL_PULL_UP     "Pull-up interno"

//#### SuplaWebPageOther.cpp ####
#define S_CALIBRATION             "Calibración"
#define S_CALIBRATION_SETTINGS    "Configuraciones de calibracion"
#define S_BULB_POWER_W            "Potencia de la bombilla [W]"
#define S_VOLTAGE_V               "Voltaje [V]"
#define S_DEPTH_CM                "Profundidad [cm]"
#define S_SENSOR_READING_DISTANCE "distancia de lectura del sensor"
#define S_ELECTRIC_PHASE          "1/3etapas"
#define S_OPTIONAL                "(Opcional)"
#define S_STATUS_LED              "Led de estado"

//#### SuplaWebPageRelay.cpp ####
#define S_RELAY_ACTIVATION_STATUS "Estado de activación del relé"
#define S_STATE                   "Expresar"
#define S_MESSAGE                 "Mensaje"
#define S_DIRECT_LINKS            "Enlaces directos"
#define S_CONDITIONING            "Acondicionamiento"
#define S_SENSOR                  "Sensor"
#define S_CONDITION               "Condición"
#define S_SWITCH_ON_VALUE         "valor de encendido"
#define S_SWITCH_OFF_VALUE        "valor de desconexión"
#define S_SETTINGS_FOR_RELAYS     "Configuraciones para relés"

//#### SuplaHTTPUpdateServer.cpp ####
#define S_FLASH_MEMORY_SIZE        "Tamaño de la memoria flash"
#define S_SKETCH_MEMORY_SIZE       "Tamaño de la memoria del boceto"
#define S_SKETCH_LOADED_SIZE       "Tamaño de boceto cargado"
#define S_SKETCH_UPLOAD_MAX_SIZE   "Tamaño máx de carga de bocetos"
#define S_UPDATE_FIRMWARE          "Actualice el firmware"
#define S_UPDATE_SUCCESS_REBOOTING "¡Actualización exitosa! Reiniciando ..."
#define S_WARNING                  "ADVERTENCIA"
#define S_ONLY_2_STEP_OTA          "solo use la actualización OTA de 2 pasos. Usar"

//#### SuplaOled.cpp ####
#define S_CONFIGURATION_MODE "Modo de configuración"
#define S_AP_NAME            "Nombre de AP"
#define S_ERROR              "error"

//#### SuplaWebCorrection.cpp ####
#define S_CORRECTION_FOR_CH "Corrección de canales"
#define S_CH_CORRECTION     "Corrección de canal:"

#ifdef SUPLA_RF_BRIDGE
#define S_CODES "kodów"
#define S_NO    "Brak"
#define S_READ  "Odczytaj"
#endif

#endif  // _LANGUAGE_ES_S_H_
