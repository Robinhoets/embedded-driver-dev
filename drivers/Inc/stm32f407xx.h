/*
 * stm32f407xx.h
 *
 *  Created on: Aug 7, 2026
 *      Author: Robert
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

/*
 * 	Base addresses of Flash and SRAM memories
 * 	Reference Manual:
 * 		FLASH_BASEADDR: Table 5. Flash module organization (STM32F40x and STM32F41x)
 * 		SRAM1_BASEADDR: Table 3. Memory mapping vs. Boot mode/physical remap
 *						in STM32F405xx/07xx and STM32F415xx/17xx
 *		SRAM2:			(2) Memory and bus Architecture -> (2.2) Memory Organization -> System Memory
 */
#define FLASH_BASEADDR				0x08000000U
#define SRAM1_BASEADDR				0x20000000U
#define SRAM2_BASEADDR				0x2001C00U
#define ROM							0x1FF000
#define SRAM 						SRAM1_BASEADDR



#endif /* INC_STM32F407XX_H_ */
