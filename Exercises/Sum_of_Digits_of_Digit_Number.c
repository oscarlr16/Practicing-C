#include <stdio.h>
int main()
{
    int n, aux, sum;
    printf("Ingrese un numero de 5 digitos: \n");
    scanf("%d", &n);
    aux = n * 10;
    while (aux > 0)
    {
        aux /= 10;
        sum += aux % 10;
    }
    printf("La suma de sus digitos es: %d\n", sum);
    return 0;
}