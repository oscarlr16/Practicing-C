#include<stdio.h>

int itera(int num);
//void compa(int iter);

void main(void){
    int num=NULL,iter=NULL;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    iter = itera(num-1)-1;

//    compa(iter);
}

int itera(int num){
    if(num == 0){
        return 1;
    }
    else{
        return(num+itera(num-1));
    }
}
/*
void compa(int iter){
    int a=0;
    for (int i = 0; i < iter; i++)
    {
        for(int j = iter-i; j>0;j--){
            printf("%d\n",j);
        }
    }
}*/