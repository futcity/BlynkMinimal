#include "common.h"

WiFiClient Client;
BlynkArduinoClient Transport(Client);
BlynkWifi Blynk(Transport);

bool Status = false;