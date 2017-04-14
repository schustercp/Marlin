/* 
 * File:   pins_RAMPS_schuster.h
 * Author: schustercp
 *
 * Created on October 5, 2015, 7:44 PM
 */

#ifndef PINS_RAMPS_SCHUSTER_H
#define	PINS_RAMPS_SCHUSTER_H

#define X_MS1_PIN -1
#define X_MS2_PIN -1
#define Y_MS1_PIN -1
#define Y_MS2_PIN -1
#define Z_MS1_PIN -1
#define Z_MS2_PIN -1
#define E0_MS1_PIN -1
#define E0_MS2_PIN -1
#define E1_MS1_PIN -1
#define E1_MS2_PIN -1
#define DIGIPOTSS_PIN -1

/**
 * Arduino Mega with RAMPS v1.3 pin assignments
 *
 * Applies to the following boards:
 *
 *  BOARD_RAMPS_13_CUSTOM - RAMPS 1.3 / 1.4 (6 steppers, 4 Heaters, 4 Fans)
 *  3 Fans are on the CONTROLLERFAN_PIN
 *  1 FAN (Part Cooler) is run by the Hardware PWM on pin 9
 *
 *  Other pins_MYBOARD.h files may override these defaults
 */

#if !defined(__AVR_ATmega1280__) && !defined(__AVR_ATmega2560__)
  #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "RAMPS 1.4"
#endif

#define LARGE_FLASH        true

#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
#define X_MIN_PIN           3
#define X_MAX_PIN           2

#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define E2_STEP_PIN        42
#define E2_DIR_PIN         40
#define E2_ENABLE_PIN      44

#define E1_STEP_PIN        26
#define E1_DIR_PIN         28
#define E1_ENABLE_PIN      24

#define E0_STEP_PIN        36
#define E0_DIR_PIN         34
#define E0_ENABLE_PIN      30

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            13
#define PS_ON_PIN          -1
#define FAN_PIN             9
#define FAN_PWM            OCR2B
//#define CONTROLLERFAN_PIN  12
#define KILL_PIN           41

#define HEATER_0_PIN       6    // EXTRUDER 1 Heater
#define HEATER_0_PWM     OCR4A
#define HEATER_1_PIN       7    // EXTRUDER 2 Heater
#define HEATER_1_PWM     OCR4B
#define HEATER_2_PIN       8    // EXTRUDER 3 Heater
#define HEATER_2_PWM     OCR4C

#define TEMP_0_PIN         14   // ANALOG NUMBERING
#define TEMP_1_PIN         13   // ANALOG NUMBERING
#define TEMP_2_PIN         12   // ANALOG NUMBERING
#define TEMP_3_PIN         -1   // ANALOG NUMBERING
#define TEMP_4_PIN         -1   // ANALOG NUMBERING

#define HEATER_BED_PIN     10
#define TEMP_BED_PIN       15   // ANALOG NUMBERING
#define HEATER_BED_PWM     OCR2A

#define LCD_PINS_RS        16
#define LCD_PINS_ENABLE    17
#define LCD_PINS_D4        23
#define LCD_PINS_D5        25
#define LCD_PINS_D6        27
#define LCD_PINS_D7        29
#define BEEPER_PIN         37
#define BTN_EN1            31 //Normaly 31 Broke Board 39
#define BTN_EN2            33
#define BTN_ENC            35
#define SD_DETECT_PIN      49

#ifdef NUM_SERVOS
	#define SERVO0_PIN         11

	#if NUM_SERVOS > 1
	#define SERVO1_PIN         6
	#endif

	#if NUM_SERVOS > 2
	#define SERVO2_PIN         5
	#endif

	#if NUM_SERVOS > 3
	#define SERVO3_PIN         4
	#endif
#endif

#if ENABLED(Z_MIN_PROBE_ENDSTOP)
  // Define a pin to use as the signal pin on Arduino for the Z_PROBE endstop.
  #define Z_MIN_PROBE_PIN  18
#endif

#if DISABLED(SDSUPPORT)
  // these pins are defined in the SD library if building with SD support
  #define SCK_PIN          52
  #define MISO_PIN         50
  #define MOSI_PIN         51
#endif


#endif	/* PINS_RAMPS_SCHUSTER_H */
