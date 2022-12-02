#ifndef _PINS_H_
#define _PINS_H_
  //#define BEAM

  #if defined(ARDUINO_ARCH_ESP8266)
    #define SD_CS_PIN		    4
    #define SD_MISO_PIN		12
    #define SD_MOSI_PIN		13
    #define SD_SCLK_PIN		14
    #define CS_SENSE	  5
  #elif defined(BEAM)
    #define CS_SENSE	    32
    #define SD_SWITCH_PIN 18
    #define RED_LED       26
    #define GREEN_LED     25
    #define BLUE_LED      27
  #else
    #define CS_SENSE	    32
    #define SD_SWITCH_PIN 26   
    #define SD_POWER_PIN  27 // Old pin: 10

    #define SD_CS_PIN		  13
    #define SD_MISO_PIN		   2
    #define SD_MOSI_PIN		  15
    #define SD_SCLK_PIN		  14

    #define SD_CMD_PIN    15
    #define SD_CLK_PIN	  14
    #define SD_D0_PIN		   2
    #define SD_D1_PIN		   4
    #define SD_D2_PIN		  12
    #define SD_D3_PIN		  13
  #endif

#endif