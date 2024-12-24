This is frimware of SD WIFI PRO(SWP)


### Flash Binary firmware to SD WIFI PRO(SWP)
Binary firmware have put into "tools\Flash\binary" directory.

1. Let SD WIFI PRO and SD WIFI PRO dev board to work together
Insert SD WIFI PRO into dev board socket, let USB cable inset to USB 
Type-C connector, and plug the cable to PC USB port.
Let the DIP is on right status: switch 1 is at OFF status, switch 2 is 
at ON status. 
If SD WIFI PRO and dev board are OK, "USB-SERIASL CH340(COMX)" will show
at Ports COM & LPT in Device Manager in Windows 10.

2. Flash
There is a batch script named install-all-8M.bat at "tools\Flash\" 
directory.  
Using the script to flash firmware bin to SD WIFI PRO at Command Prompt 
in windows operations system.

## SWD 0.x

### Access SD WIFI PRO(SWP) 
After power up, SD WIFI PRO will create a wireless access points, the AP 
ssid named as "SD-WIFI-PRO-RD".
Let device,such as PC and mobile, connect wirelessly to SD-WIFI-PRO-RD, 
after success, you can access the SD WIFI PRO by web browser.
The default AP local ip is 192.168.4.1, so usging "http://192.168.4.1" 
the Web address to asscess to SD WIFI PRO.

### Functions
1. List and Upload files
After acccess to SD WIFI PRO by http://192.168.4.1, now SWD show file list 
page at brownse.
The page list all the files in the SD card of SD WIFI PRO(8GB high-spped 
memory).

At the top block of the page , select a file , click "Upload" button to 
upload file to SD WIFI PRO.

Click "SETTING" in the left on the top block of the page, will show 
wifi.htm page.

2. Setting
Config SD WIFI PRO WiFi at wifi.htm page.

Input the right network ssid and password ,click the "Connect" button can 
let the SD WIFI PRO connect to a WiFi network.
Click "Go to AP mode", can change SD WIFI PRO into AP mode.

### Building 
The 0.x release use Arduino to compile.
    
Note:the SD WIFI PRO use AsyncTCP and ESPAsyncWebServer.  
AsyncTCP: https://github.com/dvarrel/AsyncTCP
ESPAsyncWebServer: https://github.com/me-no-dev/ESPAsyncWebServer

    
