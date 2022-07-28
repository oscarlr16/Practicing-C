#include "resistor_color.h"

resistor_band_t array[] = {BLACK,BROWN,RED,ORANGE,YELLOW,GREEN,BLUE,VIOLET,GREY,WHITE};

int color_code(resistor_band_t color){
    return (int)color;
}

const resistor_band_t *colors(void){
    return &array[0];
}