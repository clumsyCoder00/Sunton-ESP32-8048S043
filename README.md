# Sunton-ESP32-8048S043
A minimal configuration for [ESP32-S3 4.3 Inch IPS 800*480 Smart Display for Arduino](https://www.aliexpress.us/item/3256805926599852.html?spm=a2g0o.order_list.order_list_main.35.21001802zzwcX9&gatewayAdapt=glo2usa) with the IPS Capacitive Touch option  
Aliexpress included [documentation here](http://pan.jczn1688.com/directlink/1/ESP32%20module/4.3inch_ESP32-8048S043.zip?spm=a2g0o.detail.1000023.1.3e9f74c1sJMnTt&file=4.3inch_ESP32-8048S043.zip)

I had an incredibly difficult time finding the correct information to assemble a functional setup, so I thought I'd share.

This setup is intended to demonstrate a minimal fully functional setup using the following elements:

[Visual Studio Code](https://code.visualstudio.com/)
  - The following Extensions installed:
    - Platformio IDE
    - C++
    - Serial Monitor
  - In Visual Studio Code, select` Open Folder...`, open the `Sunton-ESP32-8048S043` directory, platformio will update references.
   
The firmware is dependent on the following libraries:
Libraries can be copied to the `lib` folder within the directory.
- [Arduino GFX](https://github.com/moononournation/Arduino_GFX) - Version 1.4.7
- [eez-framework](https://github.com/eez-open/eez-framework) - Version 0.0.1
- [GT911](https://github.com/tamctec/gt911-arduino) - Version 1.0.2
- [LVGL](https://github.com/lvgl/lvgl) - Version 9.1.0
  - This repository includes `lv_conf.h` with options for this project selected. This file belongs NEXT to the lvgl library directory.
    As the user interface is expanded, additonal fonts will need to be included from this file by changing the value adjacent to the font from `0` to `1`.

The user interface is built with [EEZ Studio](https://www.envox.eu/studio/studio-introduction/)
- make sure to select LVGL version 9.0 in the settings window in order to generate code compatible with LVGL.
- The Sunton-ESP32-8048S043.eez-project contains the EEZ Studio configuration for the user interface.
- Currently there is a need to [modify the default file](https://github.com/eez-open/studio/issues/361#issue-2284244161) generation for `ui.h` with the following code (the change has been made to the file in this repository):
```
  #ifndef EEZ_FOR_LVGL //fix for 'ActionExecFunc'
  #define EEZ_FOR_LVGL 
  #endif // EEZ_FOR_LVGL
  
  #ifndef LV_LVGL_H_INCLUDE_SIMPLE //fix for lvgl/lvgl.h in lvgl_api.h
  #define LV_LVGL_H_INCLUDE_SIMPLE
  #endif // LV_LVGL_H_INCLUDE_SIMPLE`
```

![screen 1](https://github.com/clumsyCoder00/Sunton-ESP32-8048S043/assets/11773579/51a79c37-31eb-4dd4-bff7-73c6bef10888)
![screen 2](https://github.com/clumsyCoder00/Sunton-ESP32-8048S043/assets/11773579/0fb9f67a-e7a8-4aa3-98e0-7fe228489582)
