#include<stdio.h>

void MAX_AND(int num);
void MAX_OR(int num);
void MAX_XOR(int num);

void main(void){
    int num=NULL;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    MAX_AND(num);
    MAX_OR(num);
    MAX_XOR(num);
}

void MAX_AND(int num){
    int a=0,max=0;
    for (int i = 1; i <= num; i++)
    {
        for(int j = num-i; j>0;j--){
            if((j&(j+1))>=max){
                max = j&(j+1);
            }
        }
    }
    printf("%d\n",max);
}

void MAX_OR(int num){
    int a=0,max=0;
    for (int i = 1; i <= num; i++)
    {
        for(int j = num-i; j>0;j--){
            if((j|(j+1))>=max){
                max = j|(j+1);
            }
        }
    }
    printf("%d\n",max);
}

void MAX_XOR(int num){
    int a=0,max=0;
    for (int i = 1; i <= num; i++)
    {
        for(int j = num-i; j>0;j--){
            if((j^(j+1))>=max){
                max = j^(j+1);
            }
        }
 
    }
    printf("%d\n",max);
}