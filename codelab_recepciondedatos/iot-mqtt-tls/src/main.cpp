#include <Arduino.h>
#include <WiFi.h>
#include <PubSubClient.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Simulando conexión MQTT sobre TLS...");
  // Aquí se simularía la conexión real
}

void loop() {
  // En un caso real, se publicaría aquí el dato leído del sensor
  delay(5000);
}
