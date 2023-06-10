#include <stdio.h> 
#include <math.h> 

int main()
{
    int raio, altura; 
    float pi, volume;
    pi = 3.14; 

    printf("Digite o valor do raio: "); 
    scanf("%d", &raio); 

    printf("Digite o valor da altura: "); 
    scanf("%d", &altura); 

    volume = pi * pow(raio, 2) * altura; 

    printf("O volume do cilindro é igual a: %.1f", volume); 
    return 0;  

}