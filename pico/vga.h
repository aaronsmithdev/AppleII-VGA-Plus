#pragma once

#include <stdint.h>


#ifdef __cplusplus
extern "C" {
#endif


#define THEN_WAIT_VSYNC (2 << 9)
#define THEN_WAIT_HSYNC (3 << 9)


void vga_init();
void vga_send_scanline(uint16_t *buf, uint len);


#ifdef __cplusplus
}
#endif
