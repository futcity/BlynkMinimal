#ifndef __PORTS_H__
#define __PORTS_H__

#include <WidgetLED.h>

#define VP_LEDS_COUNT   2

#define VP_STATUS   V0

#define VP_LED_PIN_0  V1
#define VP_LED_PIN_1  V2

extern WidgetLED *Leds[];

void PortsInit();

#endif