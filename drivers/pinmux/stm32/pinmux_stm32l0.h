/*
 * Copyright (c) 2018 Ilya Tagunov
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L0_H_
#define ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L0_H_

/**
 * @file Header for STM32L0 pin multiplexing helper
 */

#define STM32L0_PINMUX_FUNC_PB6_USART1_TX \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_PULLUP)
#define STM32L0_PINMUX_FUNC_PB7_USART1_RX \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUPDR_NO_PULL)

#define STM32L0_PINMUX_FUNC_PA9_USART1_TX \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32L0_PINMUX_FUNC_PA10_USART1_RX \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUPDR_NO_PULL)

#define STM32L0_PINMUX_FUNC_PA2_USART2_TX \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32L0_PINMUX_FUNC_PA3_USART2_RX \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUPDR_NO_PULL)

#define STM32L0_PINMUX_FUNC_PA14_USART2_TX \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32L0_PINMUX_FUNC_PA15_USART2_RX \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUPDR_NO_PULL)

#define STM32L0_PINMUX_FUNC_PA2_LPUART1_TX \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_PULLUP)
#define STM32L0_PINMUX_FUNC_PA3_LPUART1_RX \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUPDR_NO_PULL)

#define STM32L0_PINMUX_FUNC_PB8_I2C1_SCL \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L0_PINMUX_FUNC_PB9_I2C1_SDA \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32L0_PINMUX_FUNC_PA9_I2C1_SCL \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_OPENDRAIN_PULLUP)
#define STM32L0_PINMUX_FUNC_PA10_I2C1_SDA \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_OPENDRAIN_PULLUP)

#define STM32L0_PINMUX_FUNC_PB13_I2C2_SCL \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_OPENDRAIN_PULLUP)
#define STM32L0_PINMUX_FUNC_PB14_I2C2_SDA \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_OPENDRAIN_PULLUP)

#define STM32L0_PINMUX_FUNC_PC0_I2C3_SCL \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)
#define STM32L0_PINMUX_FUNC_PC1_I2C3_SDA \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_OPENDRAIN_PULLUP)

/*
 * Increase SCK pin speed to avoid last data bit corruption which is
 * a known issue of STM32L0 SPI peripheral (see errata sheets).
 */

#define STM32L0_PINMUX_FUNC_PA4_SPI1_NSS \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)
#define STM32L0_PINMUX_FUNC_PA5_SPI1_SCK \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_HIGH_SPEED)
#define STM32L0_PINMUX_FUNC_PA6_SPI1_MISO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)
#define STM32L0_PINMUX_FUNC_PA7_SPI1_MOSI \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)

#define STM32L0_PINMUX_FUNC_PA15_SPI1_NSS \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)
#define STM32L0_PINMUX_FUNC_PB3_SPI1_SCK \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_HIGH_SPEED)
#define STM32L0_PINMUX_FUNC_PB4_SPI1_MISO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)
#define STM32L0_PINMUX_FUNC_PB5_SPI1_MOSI \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)

#define STM32L0_PINMUX_FUNC_PB12_SPI2_NSS \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)
#define STM32L0_PINMUX_FUNC_PB13_SPI2_SCK \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_HIGH_SPEED)
#define STM32L0_PINMUX_FUNC_PB14_SPI2_MISO \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)
#define STM32L0_PINMUX_FUNC_PB15_SPI2_MOSI \
	(STM32_PINMUX_ALT_FUNC_0 | STM32_PUSHPULL_NOPULL)

#define STM32L0_PINMUX_FUNC_PB9_SPI2_NSS \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32L0_PINMUX_FUNC_PB10_SPI2_SCK \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_HIGH_SPEED)
#define STM32L0_PINMUX_FUNC_PC2_SPI2_MISO \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)
#define STM32L0_PINMUX_FUNC_PC3_SPI2_MOSI \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_NOPULL)

#endif /* ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L0_H_ */
