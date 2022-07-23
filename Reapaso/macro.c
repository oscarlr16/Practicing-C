#include <stdio.h>

#define AREA_RECTANGULO(x, y) (x)*(y)

void main(void){
    int ancho = 5, alto = 4;
    printf("El area del rectangulo %d x %d = %d\n",
    ancho, alto, AREA_RECTANGULO(ancho,alto));
}