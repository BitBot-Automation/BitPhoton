#ifndef RGBLED_H
#define RGBLED_H

#include <Arduino.h>

class RGBLED {
    private:
        int _redPin;
        int _greenPin;
        int _bluePin;
        int _brightness;

        int _redValue;
        int _greenValue;
        int _blueValue;

        void setColorNoChange(int red, int green, int blue) {
            analogWrite(_redPin, red * ((float)_brightness / 255.0f));
            analogWrite(_greenPin, green * ((float)_brightness / 255.0f));
            analogWrite(_bluePin, blue * ((float)_brightness / 255.0f));
        };

    public:
        RGBLED(int redPin, int greenPin, int bluePin, int brightness = 255) {
            pinMode(redPin, OUTPUT);
            pinMode(greenPin, OUTPUT);
            pinMode(bluePin, OUTPUT);

            _redPin = redPin;
            _greenPin = greenPin;
            _bluePin = bluePin;
            _brightness = brightness;
        }

        void setColor(int red, int green, int blue) {
            setColorNoChange(red, green, blue);

            _redValue = red;
            _greenValue = green;
            _blueValue = blue;
        }

        void setRed(int red) {
            analogWrite(_redPin, red * ((float)_brightness / 255.0f));
            _redValue = red;
        }

        void setGreen(int green) {
            analogWrite(_greenPin, green * ((float)_brightness / 255.0f));
            _greenValue = green;
        }

        void setBlue(int blue) {
            analogWrite(_bluePin, blue * ((float)_brightness / 255.0f));
            _blueValue = blue;
        }

        void blinkWithReturn(int red, int green, int blue, int delayTime = 250, int times = 1) {
            for (int i = 0; i < times; i++) {
                setColorNoChange(red, green, blue);
                delay(delayTime);
                setColorNoChange(0, 0, 0);
                delay(delayTime);
            }
            setColor(_redValue, _greenValue, _blueValue);
        }

        void blinkWithFinalColor(int red, int green, int blue, int delayTime = 250, int times = 1) {
            for (int i = 0; i < times; i++) {
                setColor(red, green, blue);
                delay(delayTime);
                setColor(0, 0, 0);
                delay(delayTime);
            }
            setColor(red, green, blue);
        }
};

#endif