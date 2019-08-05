#ifndef _USER_MQTT_H_
#define _USER_MQTT_H_

#include "c_types.h"
#include "mqtt.h"

void ICACHE_FLASH_ATTR mqtt_connect(void);
void ICACHE_FLASH_ATTR mqtt_disconnect(void);
void ICACHE_FLASH_ATTR mqtt_config(MqttDataCallback dataCb);


#endif

