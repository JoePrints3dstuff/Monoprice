/**
* Copyright (C) 2019 WEEDO3D
* Author: perron@163.com
*/

#ifndef BOARD_NAME
  #define BOARD_NAME "WEEDO 62B"
#endif

#define BOARD_INFO_NAME "WEEDO 62B"

#define LARGE_FLASH true

// X Motor
#define X_STEP_PIN         54
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38

// X Endstop
#define X_MIN_PIN			3
#define X_MAX_PIN			2

// Y Motor
#define Y_STEP_PIN         60
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56

// Y Endstop
#define Y_MIN_PIN			-1			
#define Y_MAX_PIN          41

// Z Motor
#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62

// Z Endstop
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

// A Motor
#define E0_STEP_PIN        26
#define E0_DIR_PIN         28
#define E0_ENABLE_PIN      24

// Card Reader
#define SDSS				53
#define SD_DETECT_PIN		49

// UART LED
#define LED_PIN            13

#define SOL1_PIN			19
#define Z_MIN_PROBE_PIN		32

// Filament out sensor
#define FIL_RUNOUT_PIN     3

 // Front Door Sensor
#define DOOROPEN_PIN 40

// Extruder0
#define FAN0_PIN           9 // (Sprinter config)
#define HEATER_0_PIN     10   // EXTRUDER 1
#define TEMP_0_PIN         13   // ANALOG NUMBERING

// Heater Bed
#define HEATER_BED_PIN    8    // BED
#define TEMP_BED_PIN         14   // ANALOG NUMBERING

// BUZZ
#define BEEPER_PIN 37

 // Pins for DOGM SPI LCD Support
#define DOGLCD_A0  27
#define DOGLCD_CS  29
#define LCD_RESET_PIN  25
#define LCD_CONTRAST_INIT 220

// Encoder
#define BTN_EN1 33
#define BTN_EN2 31
#define BTN_ENC 35  //the click switch