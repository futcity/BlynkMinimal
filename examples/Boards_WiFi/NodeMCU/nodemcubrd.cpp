#include "boards.h"

#ifdef BOARD_NODEMCU_V1

#define RELAY_PIN_0 D0
#define RELAY_PIN_1 D4

uint8_t Relays[] = {
    RELAY_PIN_0,
    RELAY_PIN_1
};

#endif