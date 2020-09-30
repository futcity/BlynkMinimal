/**
 * @file       WidgetLED.h
 * @author     Volodymyr Shymanskyy
 * @license    This project is released under the MIT License (MIT)
 * @copyright  Copyright (c) 2015 Volodymyr Shymanskyy
 * @date       Apr 2015
 * @brief
 */

#ifndef WidgetLED_h
#define WidgetLED_h

#include <Blynk/BlynkWidgetBase.h>

class WidgetLED: public BlynkWidgetBase
{
public:
    WidgetLED(BlynkWifi &blynk):
        BlynkWidgetBase(blynk),
        mValue(0),
        mBlynk(blynk)
    {}

    uint8_t getValue() const {
        return mValue;
    }

    void setValue(uint8_t value) {
        mValue = value;
        mBlynk.virtualWrite(mPin, value);
    }

    void on() {
        setValue(255);
    }

    void off() {
        setValue(0);
    }

private:
    uint8_t mValue;
    BlynkWifi &mBlynk;
};

#endif
