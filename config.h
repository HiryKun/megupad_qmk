// Copyright 2022 HriyKun (@HriyKun)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

// #define CH_CFG_ST_RESOLUTION 16

/* Layer states */
#define LAYER_STATE_8BIT

/* USB Device descriptor parameter */
#define VENDOR_ID       0x2CBB
#define PRODUCT_ID      0x4AFE
#define DEVICE_VER      0x0003
#define MANUFACTURER    HiryKun
#define PRODUCT         Megu Pad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

// ROWS: Top to bottom, COLS: Left to right
#define MATRIX_ROW_PINS { A2, A1, A0, B9 }
#define MATRIX_COL_PINS { B1, A6, A4, A3 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* RGB lights */
#define RGB_DI_PIN A5
#define DRIVER_LED_TOTAL 14
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 170
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
#define ENABLE_RGB_MATRIX_ALPHAS_MODS
#define ENABLE_RGB_MATRIX_CYCLE_ALL
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#define ENABLE_RGB_MATRIX_PIXEL_FLOW
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_PIXEL_RAIN
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Encoders */
#define ENCODERS_PAD_A { B0 }
#define ENCODERS_PAD_B { A7 }
#define ENCODER_RESOLUTION 4

/*OLED*/
#define I2C_DRIVER I2CD1
#define I2C1_CLOCK_SPEED 400000
#define I2C1_DUTY_CYCLE FAST_DUTY_CYCLE_2
#define I2C1_SCL_PIN B6
#define I2C1_SDA_PIN B7
#define OLED_BRIGHTNESS 255
#define OLED_TIMEOUT 500000
#define OLED_FADE_OUT
#define OLED_FADE_OUT_INTERVAL 5
#define OLED_SCROLL_TIMEOUT 40000

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT