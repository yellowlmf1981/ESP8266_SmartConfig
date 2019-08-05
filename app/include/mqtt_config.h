#ifndef __MQTT_CONFIG_H__
#define __MQTT_CONFIG_H__

#define CFG_HOLDER	0x00FF55A4	/* Change this value to load default configurations */
#define CFG_LOCATION	0x79	/* Please don't change or if you know what you doing */
#define MQTT_SSL_ENABLE

/*DEFAULT CONFIGURATIONS*/

#define MQTT_HOST			"192.168.14.127" //or "mqtt.yourdomain.com"
#define MQTT_PORT			1883

#define MQTT_CLIENT_ID		"DVES_%08X"
#define MQTT_USER			"device"
#define MQTT_PASS			"device"

#define SUB_TOPIC_COUNT 	2
#define PUB_TOPIC_COUNT 	2
#define UUID_LENGTH 		33

#define MQTT_BUF_SIZE		1024
#define MQTT_KEEPALIVE		120	 /*second*/

#define STA_SSID "DVES_HOME"
#define STA_PASS "yourpassword"
#define STA_TYPE AUTH_WPA2_PSK

#define MQTT_RECONNECT_TIMEOUT 	5	/*second*/

#define DEFAULT_SECURITY	0
#define QUEUE_BUFFER_SIZE		 		2048

#define PROTOCOL_NAMEv31	/*MQTT version 3.1 compatible with Mosquitto v0.15*/
//PROTOCOL_NAMEv311			/*MQTT version 3.11 compatible with https://eclipse.org/paho/clients/testing/*/

extern char *device_uuid;
extern char sub_topic_id[SUB_TOPIC_COUNT][UUID_LENGTH];
extern char pub_topic_id[PUB_TOPIC_COUNT][UUID_LENGTH];

#endif // __MQTT_CONFIG_H__
