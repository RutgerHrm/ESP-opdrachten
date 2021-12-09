#include <WiFi.h>
#include "secret.h"
#include "time.h"

//SSID en wachtwoord definiëren in secret.h met:
//#define const char* ssid = "...";
//#define const char* password = "...";

void WiFi_connect(){
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      printf(".");
  }
  printf(" CONNECTED\r\n");
}

void setup(){
  WiFi_connect();
}

void loop(){
}
