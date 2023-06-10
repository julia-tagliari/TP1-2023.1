#include <stdio.h> 
#include <math.h> 

int main()
{
    int largura, altura, area, grama, total; 

    grama = 15; 

    printf("Digite o valor da largura: "); 
    scanf("%d", &largura); 

    printf("Digite o valor da altura: "); 
    scanf("%d", &altura); 

    area = altura * largura; 
    
    total = grama * area; 

    printf("A área do terreno é igual a: %d", area); 
    printf("\nO custo para cobrir de grama é igual a: R$%d,00", total);
    return 0; 


}