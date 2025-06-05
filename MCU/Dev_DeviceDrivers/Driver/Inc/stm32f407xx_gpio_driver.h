/*
 * stm32f407xx_gpio_driver.h
 *
 *  Created on: Jun 5, 2025
 *      Author: srinathm
 */

#ifndef DRIVER_INC_STM32F407XX_GPIO_DRIVER_H_
#define DRIVER_INC_STM32F407XX_GPIO_DRIVER_H_

#include "stm32f407xx.h"

typedef struct{
	uint8_t PinNumber;
	uint8_t PinMode	;
	uint8_t PinSpeed;
	uint8_t PinPuPdControl;
	uint8_t PinOPtype;
	uint8_t PinAltFunMode;

}GPIO_PinConfig_t;

typedef struct{
	GPIO_RegDef_t *pGPIOx;
	GPIO_PinConfig_t PinConfig;

}GPIO_Handle_t;


//....GPIO clock Control API
void GPIO_PCLK_CTRL(GPIO_RegDef_t *pGPIOx, uint8_t CLKValue);
//....

//....GPIO Init/De-Init APIs
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
void GPIO_De_Init(GPIO_RegDef_t *pGPIOx);
//....

//....GPIO Read/Write APIs
uint8_t GPIO_ReadIPPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
uint16_t GPIO_ReadIPPort(GPIO_RegDef_t *pGPIOx);
void GPIO_WriteOPPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WriteOPPort(GPIO_RegDef_t *pGPIOx, uint16_t Value);
void GPIO_ToggleOPPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
//....

//....GPIO IRQ APIs
void GPIO_IRQ_Config(uint8_t IRQNumber, uint8_t IRQPriority, uint8_t value);
void GPIO_IRQ_Handling(uint8_t PinNumber);
//....

//....GPIO Pin Number
#define GPIO_PIN_0				0
#define GPIO_PIN_1				1
#define GPIO_PIN_2				2
#define GPIO_PIN_3				3
#define GPIO_PIN_4				4
#define GPIO_PIN_5				5
#define GPIO_PIN_6				6
#define GPIO_PIN_7				7
#define GPIO_PIN_8				8
#define GPIO_PIN_9				9
#define GPIO_PIN_10				10
#define GPIO_PIN_11				11
#define GPIO_PIN_12				12
#define GPIO_PIN_13				13
#define GPIO_PIN_14				14
#define GPIO_PIN_15				15

//....

//....GPIO Pin Modes
#define GPIO_MODE_IP			0
#define GPIO_MODE_OP			1
#define GPIO_MODE_ALTFN			2
#define GPIO_MODE_ANALOG		3
#define GPIO_MODE_IT_FT			4
#define GPIO_MODE_IT_RT			5
#define GPIO_MODE_IT_RFT		6
//....

//....GPIO Pin Output Types
#define GPIO_OP_TYPE_PP			0
#define GPIO_OP_TYPE_OD			1
//....

//....GPIO Pin Output Speed
#define GPIO_OP_SPEED_LO		0
#define GPIO_OP_SPEED_MED		1
#define GPIO_OP_SPEED_HI		2
#define GPIO_OP_SPEED_VHI		3
//....

//....GPIO Pin Pull-up/Pull-down
#define GPIO_PULL_NO			0
#define GPIO_PULL_UP			1
#define GPIO_PULL_DOWN			2
//....

//....GPIO Pin Pull-up/Pull-down
#define GPIO_PULL_NO			0
#define GPIO_PULL_UP			1
#define GPIO_PULL_DOWN			2
//....

#define GPIO_PIN_SET			1
#define GPIO_PIN_RESET 			0



#endif /* DRIVER_INC_STM32F407XX_GPIO_DRIVER_H_ */
