#ifndef _NETWORK_H_
#define _NETWORK_H_

#if defined(ARDUINO) && ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

#define HOSTNAME		"FYSETC"
#define SERVER_PORT		80

#define WIFI_CONNECT_TIMEOUT 30000UL // ms

typedef enum emWiFiMode {
  WM_STA,
  WM_AP
} EM_WIFI_MODE;

class Network {
public:
  Network() { initFailed = false;wifiConnecting = true;_doConnect=false;}
  int start();
  bool isConnected();
  bool isConnecting();
  void scanWiFi();
  int connect(String pssid,String ppass);
  void loop();
  int status();
  int startConnect(String ssid, String psd);
  void startSoftAP();
  bool isSTAmode();
  void getWiFiList(String &list);
  void doScan();

private:
  bool wifiConnected;
  bool wifiConnecting;
  bool initFailed;
  String _wifiList;
  EM_WIFI_MODE _wifiMode;
  bool _stamode = false;
  String _ssid;
  String _psd;
  bool _doConnect;
  bool _doScan;
};

extern Network network;

#endif
