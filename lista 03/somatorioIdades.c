#include <stdio.h>

int main(){

    int idade, menor = 0, maior = 0; 

    do
    {
        printf("Digite a idade: ");
        scanf("%d", &idade); 

        if (idade <= 21 && idade != 0){
            menor++;
        }
        else if (idade >= 50){
            maior++;
        }
    } while (idade != 0);

    printf("Total de pessoas com menos de 21 anos: %d\n", menor);
    printf("Total de pessoas com mais de 50 anos: %d\n", maior); 
    return 0;     
}