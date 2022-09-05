#include "Network.h"

#define WIFI_SSID "SALMAN Airtel_5GHz"
#define WIFI_PASSWORD "Salman22032001"

Network::Network() {
}

void WiFiEventConnected(WiFiEvent_t event, WiFiEventInfo_t info) {
  Serial.println("WIFI CONNECTED! BUT WAIT FOR THE LOCAL IP ADDR");
}

void WiFiEventGotIP(WiFiEvent_t event, WiFiEventInfo_t info) {
  Serial.print("LOCAL IP ADDRESS: ");
  Serial.println(WiFi.localIP());
}

void WiFiEventDisconnected(WiFiEvent_t event, WiFiEventInfo_t info) {
  Serial.println("WIFI DISCONNECTED!");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
}

void Network::initWiFi() {
  WiFi.disconnect();
  WiFi.onEvent(WiFiEventConnected, ARDUINO_EVENT_WIFI_STA_CONNECTED);
  WiFi.onEvent(WiFiEventGotIP, ARDUINO_EVENT_WIFI_STA_GOT_IP);
  WiFi.onEvent(WiFiEventDisconnected, ARDUINO_EVENT_WIFI_STA_DISCONNECTED);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
}
