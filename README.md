This is frimware of SD WIFI PRO(SWD)


### Flash Binary firmware to SWD
    Binary firmware have put into "tools\fluidnc-v3.6.5-win64\wifi" directory.

    1.Let SWD and SWD dev board to work together
    Insert SWD into SWP dev board socket, let USB cable inset to USB Type-C 
    connector, and plug the cable to PC USB port.
    Let the DIP is on right status: switch 1 is at OFF status, switch 2 is 
    at ON status. 
    If SWD and dev board are OK, "USB-SERIASL CH340(COMX)" will show at 
    Ports COM & LPT in Device Manager in Windows 10.

    2.Flash
    There is a batch script named install-all-8M.bat at "tools\Flash\" 
    directory.  
    Using the script to flash firmware bin to SWD at Command Prompt(CMD) 
    in windows operations system.

## SWD 0.x

### Access SWD 
    After power up, SWP will create a wireless access points, the AP ssid 
    named as "SD-WIFI-PRO-RD".
    Let device,such as PC and mobile, connect wirelessly to SD-WIFI-PRO-RD, 
    after success, you can access the SWD by web browser.
    The default AP local ip is 192.168.4.1, so usging "http://192.168.4.1" 
    the Web address to asscess to SWP.

### Functions
    1. List and Upload files
    After acccess to SWD by http://192.168.4.1, now SWD show file list page 
    at brownse.
    The page list all the files in the SD card of SWD(8GB high-spped memory).

    At the top block of the page , select a file , click "Upload" button to 
    upload file to SWP.

    Click "SETTING" in the left on the top block of the page, will show 
    wifi.htm page.

    2. Setting
    Config SWD WiFi at wifi.htm page.

    Input the right network ssid and password ,click the "Connect" button can 
    let the SWD connect to a WiFi network.
    Click "Go to AP mode", can change SWD into AP mode.

### Building 
    The 0.x release use Arduino to compile.
    
    Note:the SWD use AsyncTCP and ESPAsyncWebServer.  
    AsyncTCP: https://github.com/dvarrel/AsyncTCP
	ESPAsyncWebServer: https://github.com/me-no-dev/ESPAsyncWebServer

    