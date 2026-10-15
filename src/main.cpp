#include <Arduino.h>
#include <DHT.h>

#define DHTPIN 2       // ขา DATA ต่อกับ D2
#define DHTTYPE DHT11  // ใช้เซนเซอร์ DHT11

DHT dht(DHTPIN, DHTTYPE);

float temperature;
float humidity;

void setup() {
  Serial.begin(115200);
  dht.begin();

  Serial.println("DHT11 Sensor Started");
}

void loop() {
  // อ่านอุณหภูมิและความชื้น
  float t = dht.readTemperature();
  float h = dht.readHumidity();
  // เก็บค่าล่าสุดไว้ในตัวแปร
  String dhtData = String(t)+","+ String(h);
  Serial.println(dhtData);
  delay(2000);
}
