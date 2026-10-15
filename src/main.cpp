void loop() {
  // อ่านอุณหภูมิและความชื้น
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  // ตรวจสอบข้อผิดพลาด
  if (isnan(t) || isnan(h)) {
    Serial.println("Read sensor failed!");
    delay(2000);
    return;
  }

  // เก็บค่าล่าสุดไว้ในตัวแปร
  temperature = t;
  humidity = h;

  // แสดงอุณหภูมิ
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  // แสดงความชื้น
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.println("------------------");

  delay(2000);
}