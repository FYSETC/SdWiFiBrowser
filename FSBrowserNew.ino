#include <Arduino.h>
#include "sdControl.h"
#include "config.h"
#include "serial.h"
#include "network.h"
#include "FSWebServer.h"
#include <SPIFFS.h>

void setup() {
  SERIAL_INIT(115200);
  SPIFFS.begin();
  sdcontrol.setup();
  network.start();
  server.begin(&SPIFFS);
}

void loop() {
  network.loop();
}