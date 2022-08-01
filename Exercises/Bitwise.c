#include<stdio.h>

void combinations(int num);

void main(void){
    int num=NULL;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    combinations(num);
}



void combinations(int num){
    int a=0;
    for (int i = 1; i <= num; i++)
    {
        for(int j = num-i; j>0;j--){
            printf("%d\t",j);
            printf("%d\n",j+i);
        }
    }
}