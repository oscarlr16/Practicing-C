#include <stdio.h>
#include <math.h>

int main()
{
    int digits, number, sum = 0, aux;

    printf("Enter a number : \n");
    scanf("%d", &number);

    digits = log10(number) + 1;
    aux = number * 10;

    while (aux > 0){
        aux /= 10;
        sum += pow(aux % 10, digits);
    }
    if (sum == number){
        printf("It's an Amstrong number");
    }
    else printf("It's not an Amstrong number");
    return 0;
}