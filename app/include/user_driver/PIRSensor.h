/*
 * PIRSensor.h
 *
 *  Created on: 2017Äê12ÔÂ27ÈÕ
 *      Author: Qian
 */

#ifndef APP_INCLUDE_USER_DRIVER_PIRSENSOR_H_
#define APP_INCLUDE_USER_DRIVER_PIRSENSOR_H_


#define PIRSENSOR_MUX			PERIPHS_IO_MUX_GPIO4_U
#define PIRSENSOR_FUNC			FUNC_GPIO4
#define PIRSENSOR_NUM			4


void PIRSensor_Init(void *GPIO_ISR_Handler);

#endif /* APP_INCLUDE_USER_DRIVER_PIRSENSOR_H_ */
