#include "common.h"
#include "ports.h"
#include "timers.h"
#include "boards.h"

void setup()
{
    Serial.begin(9600);
    Blynk.begin(DEVICE_KEY, WIFI_SSID, WIFI_PASSWD, BLYNK_SERVER, BLYNK_SERVER_PORT);
    
    PortsInit();
    TimersInit();

    for (uint8_t i = 0; i < RELAYS_COUNT; i++) {
        pinMode(Relays[i], OUTPUT);
    }   
}

void loop()
{
    Blynk.run();
    TimersRun();
}
