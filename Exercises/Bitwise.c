#include<stdio.h>

void MAX_AND(int num, int k);
void MAX_OR(int num, int k);
void MAX_XOR(int num, int k);

void main(void){
    int num=NULL,k=NULL;
    printf("Ingrese un numero: \n");
    scanf("%d%d",&num,&k);
    MAX_AND(num, k);
    MAX_OR(num, k);
    MAX_XOR(num, k);
}

void MAX_AND(int num, int k){
    int max=0;
    for (int i = 1; i <= num; i++)
    {
        for(int j = num-i; j>0;j--){
            if((j&(j+i))>=max && (j&(j+i))<k){
                max = j&(j+i);
            }
        }
    }
    printf("%d\n",max);
}

void MAX_OR(int num, int k){
    int max=0;
    for (int i = 1; i <= num; i++)
    {
        for(int j = num-i; j>0;j--){
            if((j|(j+i))>=max && (j|(j+i))<k){
                max = j|(j+i);
            }
        }
    }
    printf("%d\n",max);
}

void MAX_XOR(int num, int k){
    int max=0;
    for (int i = 1; i <= num; i++)
    {
        for(int j = num-i; j>0;j--){
            if((j^(j+i))>=max && (j^(j+i))<k){
                max = j^(j+i);
            }
        }
 
    }
    printf("%d\n",max);
}