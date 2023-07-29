#include <OneWire.h>
#include <DallasTemperature.h>
#define KY001_ONE_WIRE 3
OneWire oneWire(KY001_ONE_WIRE);
DallasTemperature sensors(&oneWire);
void setup(void)
{
  Serial.begin(9600);
  Serial.println("KY-001 sicaklik sensoru olcumleri");
  sensors.begin();
}
void loop(void)
{ 
  sensors.requestTemperatures();
  Serial.print("Sicaklik: ");
  Serial.print(sensors.getTempCByIndex(0));
  Serial.println(" °C");
  delay(1000);
}
