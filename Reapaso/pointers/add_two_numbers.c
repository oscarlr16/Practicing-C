#include<stdio.h>

void main(){
    int num1,num2,sum, diff, mult,div;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter any two numbers: ");
    scanf("%d%d",ptr1,ptr2);

    sum = *ptr1 + *ptr2;
    diff = *ptr1 - *ptr2;
    mult = *ptr1 * *ptr2;
    div = *ptr1 / *ptr2;

    printf("Sum = %d\n",sum);
    printf("Diff = %d\n",diff);
    printf("Mult = %d\n",mult);
    printf("Div = %d\n",div);

}