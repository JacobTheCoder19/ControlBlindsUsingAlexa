#include <ESP32Servo.h>
#ifdef ARDUINO_ARCH_ESP32
#include <WiFi.h>
#else
#include <ESP8266WiFi.h>
#endif
#include <Espalexa.h>
Servo servo1;
int fullRotationTime = 4700; 

Espalexa espalexa;

void firstBlindChanged(uint8_t brightness) {
    servo1.attach(12); 
    Serial.print("Alexa command received: ");
    Serial.println(brightness);

    if (brightness > 0) { // ON
        Serial.println("Closing blind...");
        servo1.write(180); // Rotate counterclockwise
        delay(fullRotationTime); 
        servo1.write(90);  // Stop
    } else { // OFF
        Serial.println("Opening blind...");
        servo1.write(0); // Rotate clockwise
        delay(fullRotationTime);
        servo1.write(90); // Stop
    }
    servo1.detach(); // Detach the servo
}


void setup() {
    Serial.begin(115200);
    WiFi.begin("WIFI_NAME", "WIFI_PASSWORD");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("Connected to WiFi");

    espalexa.addDevice("Blinds One", firstBlindChanged);
    espalexa.begin();
}

void loop() {
    espalexa.loop();
    delay(1);
}