#include <stdio.h> 

int main()
{
    int km;
    float milhas, total;  

    milhas = 0.621371;

    printf("Digite um valor em Km: "); 
    scanf("%d", &km); 

    total = km * milhas; 

    printf("O valor fornecido em Km é igual a %.1f milhas", total); 
    return 0; 
}