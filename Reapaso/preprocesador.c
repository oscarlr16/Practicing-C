#include <stdio.h>
#define PREMIUM

void main(void){
#ifndef SUPER_PREMIUM
    printf("No tienes superpremium\n");
#endif

#ifdef PREMIUM
    printf("Tienes premium");
#else
    printf("No tienes premium");

}