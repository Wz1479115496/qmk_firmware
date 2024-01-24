// Copyright 2023 VertorWang (@itarze)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* SPI */
#define SPI_DRIVER SPIDQ
#define SPI_SCK_PIN B3
#define SPI_MOSI_PIN B5
#define SPI_MISO_PIN B4

/* Flash */
#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN C12

/* RGB Driver */
#define AW20216S_CS_PIN_1 D2
#define AW20216S_CS_PIN_2 B8
#define AW20216S_EN_PIN_1 B9
#define AW20216S_EN_PIN_2 B9

#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 65
#define DRIVER_2_LED_TOTAL 25
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
