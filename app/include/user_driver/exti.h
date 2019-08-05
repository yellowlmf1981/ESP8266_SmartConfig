/*
 * exti.h
 *
 *  Created on: 2018Äê1ÔÂ10ÈÕ
 *      Author: Qian
 */

#ifndef APP_INCLUDE_USER_DRIVER_EXTI_H_
#define APP_INCLUDE_USER_DRIVER_EXTI_H_

#include "c_types.h"

#define GPIN_INTR_NUM      8

typedef void (* intr_handle)(void *);


void GPIO_INTR_ATTACH(void *key_intr_handler, void* keys, uint8_t gpio_no);

#endif /* APP_INCLUDE_USER_DRIVER_EXTI_H_ */
