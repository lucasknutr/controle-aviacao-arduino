// skdksp
#include <Arduino.h>
#include <Servo.h>
#include <SoftwareSerial.h>
#include <Wire.h>
#include <EEPROM.h>
#include <SPI.h>

Arduino.init();
Arduino.setup();
Arduino.loop();

Servo servomotor;
int pos = 0;

void setup(void);
void loop(void);

const int potenciometro = 0;
int value = 0;


void setup(void)
{
    Serial.begin(9600);
}

void loop(void)
{
    value = analogRead(potenciometro);
    Serial.println(value);
    delay(100);
}

// Drawing the logics of an aeroplane model
// 1. The aeroplane is on the ground
void init(void)
{
}


// 2. The aeroplane is taking off
// 3. The aeroplane is flying

int main(void)
{
    init();
    setup();
    for (;;)
        loop();
    return 0;
}



