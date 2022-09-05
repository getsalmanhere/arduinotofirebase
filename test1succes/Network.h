#ifndef Network_H_
#define Network_H_

#include <WiFi.h>
#include<Firebase_ESP_Client.h>

class Network {
private:
  friend void WiFiEventConnected(WiFiEvent_t event, WiFiEventInfo_t info);
  friend void WiFiEventGotIP(WiFiEvent_t event, WiFiEventInfo_t info);
  friend void WiFiEventDisconnected(WiFiEvent_t event, WiFiEventInfo_t info);

public:
  Network();
  void initWiFi();
};


#endif
