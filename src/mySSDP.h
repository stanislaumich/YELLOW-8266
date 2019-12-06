#ifndef mySSDP
  #define mySSDP
#include <ESP8266SSDP.h>

void MySSDPInit(void) {
    //Если версия  2.0.0 закoментируйте следующую строчку
  SSDP.setDeviceType("upnp:rootdevice");
  SSDP.setSchemaURL("description.xml");
  SSDP.setHTTPPort(80);
  SSDP.setName("Yellow8266");
  SSDP.setSerialNumber("280119780945");
  SSDP.setURL("/");
  SSDP.setModelName("Yellow8266");
  SSDP.setModelNumber("000000000001");
  SSDP.setModelURL("http://192.168.1.237");
  SSDP.setManufacturer("Lz42");
  SSDP.setManufacturerURL("http://192.168.1.237");
  SSDP.begin();
}
 #endif 