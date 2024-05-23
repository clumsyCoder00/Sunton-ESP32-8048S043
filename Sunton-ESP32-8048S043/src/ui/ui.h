#ifndef EEZ_LVGL_UI_GUI_H
#define EEZ_LVGL_UI_GUI_H

#ifndef EEZ_FOR_LVGL //fix for 'ActionExecFunc'
#define EEZ_FOR_LVGL 
#endif // EEZ_FOR_LVGL

#ifndef LV_LVGL_H_INCLUDE_SIMPLE //fix for lvgl/lvgl.h in lvgl_api.h
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif // LV_LVGL_H_INCLUDE_SIMPLE

#include <eez/flow/lvgl_api.h>

#ifdef __cplusplus
extern "C" {
#endif

void ui_init();
void ui_tick();

#ifdef __cplusplus
}
#endif


#endif // EEZ_LVGL_UI_GUI_H