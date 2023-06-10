#include <stdio.h>
#include <stdlib.h>


int main()
{
    int base, altura, area; 
        
        printf("Digite o valor da base e da altura: ");

        scanf("%d", &base);
        scanf("%d", &altura); 

        area = base * altura; 

        printf("O valor da área é: %d", area);
        return 0; 
}