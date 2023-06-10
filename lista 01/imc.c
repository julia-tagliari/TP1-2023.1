#include <stdio.h>
#include <math.h> 

int main()
{
    int peso; 
    float altura, imc; 
    
        printf("Digite seu peso: ");
        scanf("%d", &peso); 
        
        printf("Digite sua altura: ");
        scanf("%f", &altura); 
        
        imc = peso / pow(altura, 2); 
        
        printf("O valor do IMC é: %.2f", imc); 
    return 0;
}