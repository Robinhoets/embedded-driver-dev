/*
 * stm32f407xx_gpio_driver.c
 *
 *  Created on: Aug 9, 2026
 *      Author: Robert
 */
#include "stm32f407xx_gpio_driver.h"

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
	if(EnorDi == ENABLE)
	{
		if(pGPIOx == GPIOA)
		{
			GPIOA_PCLK_EN();
		}
		else if(pGPIOx == GPIOB)
		{
			GPIOB_PCLK_EN();
		}
		else if(pGPIOx == GPIOC)
		{
			GPIOC_PCLK_EN();
		}
		else if(pGPIOx == GPIOD)
		{
			GPIOD_PCLK_EN();
		}
		else if(pGPIOx == GPIOE)
		{
			GPIOE_PCLK_EN();
		}
		else if(pGPIOx == GPIOF)
		{
			GPIOF_PCLK_EN();
		}
		else if(pGPIOx == GPIOG)
		{
			GPIOF_PCLK_EN();
		}
		else if(pGPIOx == GPIOH)
		{
			GPIOF_PCLK_EN();
		}
		else if(pGPIOx == GPIOI)
		{
			GPIOI_PCLK_EN();
		}
	}
	else
	{
		if(pGPIOx == GPIOA)
		{
			GPIOA_PCLK_DI();
		}
		else if(pGPIOx == GPIOB)
		{
			GPIOB_PCLK_DI();
		}
		else if(pGPIOx == GPIOC)
		{
			GPIOC_PCLK_DI();
		}
		else if(pGPIOx == GPIOD)
		{
			GPIOD_PCLK_DI();
		}
		else if(pGPIOx == GPIOE)
		{
			GPIOE_PCLK_DI();
		}
		else if(pGPIOx == GPIOF)
		{
			GPIOF_PCLK_DI();
		}
		else if(pGPIOx == GPIOG)
		{
			GPIOF_PCLK_DI();
		}
		else if(pGPIOx == GPIOH)
		{
			GPIOF_PCLK_DI();
		}
		else if(pGPIOx == GPIOI)
		{
			GPIOI_PCLK_DI();
		}
	}
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

