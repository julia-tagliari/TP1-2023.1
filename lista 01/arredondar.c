#include <stdio.h>

int main()
{
    float real;
    int   n;

    printf("Digite um numero real qualquer.\n");
    scanf("%f", &real);

    n = real + 0.5;

    printf("\n%f arredondado = %d\n", real, n);
}