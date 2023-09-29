#include <xc.h>
#include "CONFIG.h"
#include "color_rgb.h"

void color(unsigned char red,unsigned char green, unsigned char blue){
    ldatae = 0;
    rojo   = red;
    verde  = green;
    azul   = blue;
}