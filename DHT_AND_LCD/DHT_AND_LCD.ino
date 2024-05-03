#include <LiquidCrystal.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#define DHTTYPE DHT11
#define DHTPIN 9
DHT_Unified dht(DHTPIN, DHTTYPE);
uint32_t delayMS;
int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd (rs, en, d4, d5, d6, d7);


void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
dht.begin();
sensor_t sensor;
delayMS = sensor.min_delay / 1000;


}

void loop() {
  // put your main code here, to run repeatedly:
sensors_event_t event;
dht.temperature().getEvent(&event);
lcd.setCursor(0,0);
lcd.clear();
lcd.print("Temp: ");
lcd.print(event.temperature);
dht.humidity().getEvent(&event);
lcd.setCursor(0,1);
lcd.print("Humd: ");
lcd.print(event.relative_humidity);

}
