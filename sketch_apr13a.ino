#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);

const int BTN_PIN = 2;
int lightStatus = 0;

void setup() {
  u8g2.begin();
  pinMode(BTN_PIN, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BTN_PIN) == LOW) {
    lightStatus = !lightStatus;
    delay(200); 
  }

  u8g2.clearBuffer();
  u8g2.setFont(u8g2_font_ncenB08_tr);
  u8g2.drawStr(0, 10, "HA Mini Hub");
  u8g2.drawStr(0, 30, "Temp: 22.5C");
  
  u8g2.setCursor(0, 50);
  u8g2.print("Lights: ");
  u8g2.print(lightStatus ? "ON" : "OFF");
  
  u8g2.sendBuffer();
}