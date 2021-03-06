#include <Adafruit_GPS.h>
Adafruit_GPS GPS(&Serial1);

void setup()
{
  Serial.begin(115200);

  GPS.begin(38400);  //9600/19200/38400/57600/115200
  GPS.set_config(CONFIG_DEFAULT);  //CONFIG_DEFAULT/CONFIG_SAVE
}

void loop() // run over and over again
{
  if (Serial1.available()) {
    char c = Serial1.read();
    Serial.write(c);
  }
}
