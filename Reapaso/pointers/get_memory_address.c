#include<stdio.h>

void main(void){
    char character = 'c';
    int integer = 1;
    float real = 10.4f;
    long long biginteger = 989898989ll;

    printf("Value of character = %c, Address of character = %u\n",character,&character);
    printf("Value of character = %d, Address of character = %u\n",integer,&integer);
    printf("Value of character = %f, Address of character = %u\n",real,&real);
    printf("Value of character = %lld, Address of character = %u\n",biginteger,&biginteger);
}