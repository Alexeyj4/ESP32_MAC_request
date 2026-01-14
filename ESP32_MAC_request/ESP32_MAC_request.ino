//#ifdef ESP32
#include <WiFi.h>
//#else 
//#include <ESP8266WiFi.h>
//#endif
 
void setup() { 
  WiFi.mode(WIFI_STA);
  Serial.begin(115200);

}
void loop() {   
  //Serial.print("ESP Board MAC Address:&nbsp; "); 
  Serial.println(WiFi.macAddress());
  delay(5000); 
}
