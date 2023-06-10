#include <stdio.h> 
#include <math.h> 

int main()
{
    int largura, altura, preco, total, area; 
    preco = 15; 

    printf("Digite a largura: "); 
    scanf("%d", &largura); 

    printf("Digite a altura: "); 
    scanf("%d", &altura); 

    area = (altura * largura) * 4; 
    total = area * preco; 

    printf("A metragem necessária será de: %d", area); 
    printf("\nO custo total será de: R$%d,00", total); 

}