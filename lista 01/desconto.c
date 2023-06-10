#include <stdio.h>
#include <math.h> 

int main()
{
    int valor; 
    float desconto, descontado, novo; 
    
    valor = 59;
    desconto = 0.3; 
    
    descontado = valor * desconto; 
    printf("O valor descontado foi de: %.1f\n", descontado); 
    
    novo = valor - descontado; 
    printf("Seu novo valor é: %.1f", novo); 
    
    return 0; 
    
}