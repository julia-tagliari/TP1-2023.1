#include <stdio.h> 
#include <math.h>

int main()
{
    int altura, raio;
    float volume, pi; 
    pi = 3.14; 

    printf("Digite o valor do raio da esfera: ");
    scanf("%d", &raio); 

    volume = (4 * pi * pow(raio, 3)) / 3; 

    printf("O volume da esfera é igual a: %.1f ", volume);   
    return 0; 
}