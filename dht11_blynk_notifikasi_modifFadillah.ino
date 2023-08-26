// "Nama programmer : Muhammad Fahru Fadillah"
// Sumber referensi belajar https://www.youtube.com/watch?v=ZkStgIvDenY



#define BLYNK_TEMPLATE_ID "TMPL6HjK61kq0" // ID Template yang didapat ketika membuat template di BLYNK
#define BLYNK_TEMPLATE_NAME "DHT 11 Nodemcu Amica" // Nama Template yang dibuat di BLYNK
#define BLYNK_AUTH_TOKEN "GAAUAB5nxy6C1Hva7glEXJ9XxLxro1YC" // Token Authentifikasi untuk menghubungkan ke BLYNK

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h> // Library ESP8266 WIFI
#include <BlynkSimpleEsp8266.h> // Library BLYNK
 

#include <DHT.h>

char auth[] = "GAAUAB5nxy6C1Hva7glEXJ9XxLxro1YC" ; // Token Authentifikasi untuk menghubungkan ke BLYNK
char ssid[] = "BUKAN WIFI GRATIS ANJING";  // Nama wifi yang digunakan
char pass[] = "#ANJING2023";  // Kata sandi / Pasword wifi yang digunakan

#define DHTPIN D5          // Menyebutkan dan mendeklarasikan digital pin yang terhubung dan yang kita pakai 
#define DHTTYPE DHT11     // DHT 11 jenis sensor Humidity dan Temperature  
DHT dht(DHTPIN, DHTTYPE);
BlynkTimer timer;



void setup(){
   Serial.begin(115200);
  
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80);
  dht.begin();
  timer.setInterval(1000, sendSensor);
}

void loop(){
  Blynk.run();
  timer.run();
}
void sendSensor(){
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // or dht.readTemperature(true) for Fahrenheit
  if (isnan(h) || isnan(t)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Blynk.virtualWrite(V0, t);
  Blynk.virtualWrite(V1, h);
  
  Serial.print("Suhu : ");
  Serial.print(t);
  Serial.print("|| Kelembapan : ");
  Serial.println(h);

}
