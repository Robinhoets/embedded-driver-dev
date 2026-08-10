/*
 * stm32f407xx_gpio_driver.h
 *
 *  Created on: Aug 9, 2026
 *      Author: Robert
 */

#ifndef INC_STM32F407XX_GPIO_DRIVER_H_
#define INC_STM32F407XX_GPIO_DRIVER_H_

#include "stm32f407xx.h"


typedef struct
{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinSpeed;
	uint8_t GPIO_PinPuPdControl;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;
}GPIO_PinConfig_t;

/*
 * 	Handle structure for a GPIO pin.
 */
typedef struct
{
	GPIO_RegDef_t *pGPIOx;					/*!< Holds the base address of the GPIO port to which the pin belongs. > */
	GPIO_PinConfig_t GPIO_PinConfig;		/*!< HOlds GPIO pin configuration settings. >*/
}GPIO_Handle_t;


/*******************************************************************************************
 * 							APIs supported by this driver
 *******************************************************************************************/

/*
 * 	Peripheral Clock Setup
 */

/***************************************************************************
 * @fn				- GPIO_PeriClockControl
 *
 * @brief			- Enables or diables the peripheral clock for a given GPIO port.
 *
 * @param[in]		- Base address of the GPIO peripheral.
 * @param[in]		- ENABLE or DISABLE macros.
 *
 * @return			- none
 *
 * @Note			- none
 */
void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi)
{

}

/*
 * 	Initialize and De-initialize
 */

/**************************************************************************
 * @fn				- GPIO_Init
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			-
 *
 * @Note			-
 */
void GPIO_Init(GPIO_Handle_t *pGPIOHandle)
{

}

/***************************************************************************
 * @fn				- GPIO_DeInit
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			- none
 *
 * @Note			-
 */
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx)
{

}

/*
 * 	Data read and write
 */

/***************************************************************************
 * @fn				-
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			-
 *
 * @Note			-
 */
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}

/***************************************************************************
 * @fn				-
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			-
 *
 * @Note			-
 */
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx)
{

}

/***************************************************************************
 * @fn				-
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			-
 *
 * @Note			-
 */
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value)
{

}

/***************************************************************************
 * @fn				-
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			-
 *
 * @Note			-
 */
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value)
{

}

/***************************************************************************
 * @fn				-
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			-
 *
 * @Note			-
 */
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber)
{

}

/*
 * 	IRQ Configuration and ISR handling
 */

/***************************************************************************
 * @fn				-
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			-
 *
 * @Note			-
 */
void GPIO_IRQConfig(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t EnorDi)
{

}

/***************************************************************************
 * @fn				-
 *
 * @brief			-
 *
 * @param[in]		-
 *
 * @return			-
 *
 * @Note			-
 */
void GPIO_IRQHandling(uint8_t PinNumber)
{

}


#endif /* INC_STM32F407XX_GPIO_DRIVER_H_ */
