/*
 * @Author: MIngya jin2899042558@163.com
 * @Date: 2024-05-01 13:22:32
 * @LastEditors: MIngya jin2899042558@163.com
 * @LastEditTime: 2024-05-05 23:00:50
 * @FilePath: \Codingc:\Users\ASUS\Documents\PlatformIO\Projects\arduino_demo\src\main.cpp
 * @Description: è¿™æ˜¯é»˜è?¤è?¾ç½®,è¯·è?¾ç½®`customMade`, æ‰“å¼€koroFileHeaderæŸ¥çœ‹é…ç½® è¿›è?Œè?¾ç½®: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Arduino.h"

void setup() {
   Serial.begin(9600);
}

String my_income;
String password[] = {"AA", "BB", "CC", "DD"};
int cnt = 0;
void loop() {
   if (Serial.available() > 0)
   {
      delay(50);
      my_income = Serial.readStringUntil('\n');
      my_income.trim();
      if (my_income == password[cnt])
      {
         cnt += 1;
         if (cnt == 4)
         {
            Serial.println("ÃÜÂëÕıÈ·");
            cnt = 0;
         }
      }
      else
      {
         Serial.println("ÃÜÂë´íÎó");
         cnt = 0;
      }
   }
}
