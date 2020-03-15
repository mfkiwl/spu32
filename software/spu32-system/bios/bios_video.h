#ifndef BIOS_VIDEO_H
#define BIOS_VIDEO_H

#include "bios_shared.h"

#include "devices.h"

#define VIDEO_MODE *((volatile uint8_t*)DEV_VGA_MODE)
#define VIDEO_BASE *((volatile uint32_t*)DEV_VGA_BASE)
#define VIDEO_FONT *((volatile uint32_t*)DEV_VGA_FONT)
#define VIDEO_PALETTE *((volatile uint32_t*)DEV_VGA_PALETTE)


result_t bios_video_set_mode(videomode_t mode, uint32_t* videobase, uint32_t* fontbase);
result_t bios_video_set_palette(uint8_t* palette);
uint32_t bios_video_get_videobase();
uint32_t bios_video_get_fontbase();
uint32_t bios_video_getcols();
uint32_t bios_video_getrows();


#endif
