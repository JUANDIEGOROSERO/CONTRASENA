/* 
 * File:   color_rgb.h
 * Author: JuanDiego
 *
 * Created on 29 de septiembre de 2023, 03:22 PM
 */

#ifndef COLOR_RGB_H
#define	COLOR_RGB_H

#ifdef	__cplusplus
extern "C" {
#endif

#define ldatae       TRISE
#define rojo         PORTEbits.RE0
#define verde        PORTEbits.RE1
#define azul         PORTEbits.RE2

void color(unsigned char red,unsigned char green, unsigned char blue);

#ifdef	__cplusplus
}
#endif

#endif	/* COLOR_RGB_H */

