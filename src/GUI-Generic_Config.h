#ifndef GUI_Generic_Config_h
#define GUI_Generic_Config_h

#include "SuplaTemplateBoard.h"

// #define USE_CUSTOM

// User configuration
#ifdef USE_CUSTOM
#ifdef BUILD_VERSION
#undef BUILD_VERSION
#endif  // ifdef BUILD_VERSION

#define BUILD_VERSION "User GUI 1.0.1"

//#define DEBUG_MODE

//#define DEFAULT_TEMPLATE_BOARD BOARD_SHELLY2
#define SUPLA_OTA
#define SUPLA_ENABLE_GUI
//#define -D SUPLA_ENABLE_SSL

// Language en - english, pl - polish (default if not defined UI_LANGUAGE), es- spanish, fr - french, de - german,
//#define UI_LANGUAGE de

#define SUPLA_RELAY
#define SUPLA_BUTTON
#define SUPLA_LIMIT_SWITCH
#define SUPLA_ROLLERSHUTTER
#define SUPLA_CONFIG
#define SUPLA_LED

// ##### 1Wire #####
#define SUPLA_DS18B20
#define SUPLA_DHT11
#define SUPLA_DHT22
#define SUPLA_SI7021_SONOFF

// ##### i2c #####
#define SUPLA_BME280
#define SUPLA_BMP280
#define SUPLA_SHT3x
#define SUPLA_SI7021
#define SUPLA_OLED
#define SUPLA_MCP23017
// #define SUPLA_HTU21D    // 0x40 NOT SUPPORTED
// #define SUPLA_SHT71     // 0x44 AND 0x45 NOT SUPPORTED
// #define SUPLA_BH1750    // 0x23 AND 0x5C NOT SUPPORTED
// #define SUPLA_MAX44009  // A0 NOT SUPPORTED

// ##### SPI #####
#define SUPLA_MAX6675

// ##### Other #####
#define SUPLA_HC_SR04
#define SUPLA_IMPULSE_COUNTER
#define SUPLA_HLW8012
#define SUPLA_RGBW
#define SUPLA_PUSHOVER
#define SUPLA_DIRECT_LINKS
#define SUPLA_NTC_10K
#define SUPLA_PZEM_V_3

#endif  // USE_CUSTOM

#ifndef DEBUG_MODE
#define supla_lib_config_h_  // silences unnecessary debug messages "should be disabled by default"
#endif

#if (DEFAULT_TEMPLATE_BOARD != BOARD_OFF)
#define SUPLA_RELAY
#define SUPLA_BUTTON
#define SUPLA_LIMIT_SWITCH
#define SUPLA_ROLLERSHUTTER
#define SUPLA_CONFIG
#define SUPLA_ENABLE_GUI
//#define SUPLA_ENABLE_SSL

#if (DEFAULT_TEMPLATE_BOARD == BOARD_GOSUND_SP111) || (DEFAULT_TEMPLATE_BOARD == BOARD_SHELLY_PLUG_S)
#define SUPLA_HLW8012
#define SUPLA_LED
#undef SUPLA_LIMIT_SWITCH

#elif (DEFAULT_TEMPLATE_BOARD == BOARD_DIMMER_LUKASZH)
#define SUPLA_RGBW

#elif (DEFAULT_TEMPLATE_BOARD == BOARD_H801)
#define SUPLA_RGBW
#undef SUPLA_LIMIT_SWITCH
#undef SUPLA_RELAY

#endif
#endif

#if defined(SUPLA_ROLLERSHUTTER) || defined(SUPLA_OLED) || defined(SUPLA_RGBW)
#if !defined(SUPLA_BUTTON)
#define SUPLA_BUTTON
#endif
#endif

#if defined(SUPLA_ROLLERSHUTTER) || defined(SUPLA_PUSHOVER) || defined(SUPLA_DIRECT_LINKS) || defined(SUPLA_LED)
#if !defined(SUPLA_RELAY)
#define SUPLA_RELAY
#endif
#endif

#endif  // GUI-Generic_Config_h
