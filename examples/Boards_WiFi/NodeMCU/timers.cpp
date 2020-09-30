#include "timers.h"
#include "common.h"
#include "ports.h"
#include "boards.h"

#include <Blynk/BlynkTimer.h>

SimpleTimer MainTimer;

void MainTimerCallback()
{
    for (uint8_t i = 0; i < RELAYS_COUNT; i++) {
        if (Status) {
            Leds[i]->on();
            digitalWrite(Relays[i], HIGH);
        } else {
            Leds[i]->off();
            digitalWrite(Relays[i], LOW);
        }
    }
}

void TimersInit()
{
    MainTimer.setInterval(MAIN_TMR_DELAY, MainTimerCallback);
}

void TimersRun()
{
    MainTimer.run();
}

void ProcessCallbacks()
{
    MainTimerCallback();
}