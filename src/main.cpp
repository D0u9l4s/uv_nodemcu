#include <Wire.h>
#include "Adafruit_VEML6070.h"

Adafruit_VEML6070 uv = Adafruit_VEML6070();

void setup()
{
  Serial.begin(9600);
  Serial.println("VEML6070");
  uv.begin(VEML6070_1_T);
}

void loop()
{
  Serial.print("Índice UV: ");

  if (uv.readUV() >= 0 && uv.readUV() < 689)
  {
    Serial.println("Baixo");
  }
  else

      if (uv.readUV() >= 690 && uv.readUV() < 1379)
  {
    Serial.println("Moderado");
  }
  else

      if (uv.readUV() >= 1380 && uv.readUV() < 1839)
  {
    Serial.println("Alto");
  }
  else

      if (uv.readUV() >= 1839 && uv.readUV() < 2529)
  {
    Serial.println("Muito Alto");
  }

  if (uv.readUV() >= 2530 && uv.readUV() < 2760)
  {
    Serial.println("Extremo");
  }

  delay(500);
}

/*1-230
  2-460
  3-690
  4-920
  5-1150
  6-1380
  7-1610
  8-1840
  9-2070
  10-2300
  11-2530*/