#include "ports.h"
#include "common.h"
#include "timers.h"

WidgetLED Led0(Blynk);
WidgetLED Led1(Blynk);

WidgetLED *Leds[] = {
    &Led0,
    &Led1
};

void PortsInit()
{
    Led0.setVPin(VP_LED_PIN_0);
    Led1.setVPin(VP_LED_PIN_1);
}

BLYNK_WRITE(VP_STATUS)
{
    if (param.asInt() == TRUE) {
        Status = true;
    } else {
        Status = false;
    }
    ProcessCallbacks();
}