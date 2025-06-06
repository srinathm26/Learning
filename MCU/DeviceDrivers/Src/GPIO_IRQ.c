/*
 * GPIO_IRQ.c
 *
 *  Created on: Jun 6, 2025
 *      Author: gunal
 */

#include <stdint.h>
#include "stm32f407xx.h"
#include "stm32f407xx_gpio_driver.h"

int main(){
	return 0;
}

void EXTI0_IRQHandler(void){
	GPIO_IRQ_Handling(0);
}


