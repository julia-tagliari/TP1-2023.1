#include <stdio.h>

int main(){

    int idade, eleitores = 0; 

    do
    {
        printf("Digite a idade: \n");
        scanf("%d", &idade); 

        if (idade >= 18)
        {
            eleitores++;
        }
        
    } while (idade != 0);

    printf("O número de eleitores obrigatórios é igual a: %d", eleitores);
    
}