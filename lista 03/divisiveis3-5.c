#include <stdio.h>

int main(){

    int contador = 0, valor, i;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        if (valor % 3 == 0 || valor % 5 == 0 && valor % 2 != 0)
        {
            contador++; 
        }
         
    }

    printf("A quantidade de números divididos por 3 e 5 é %d", contador); 
    return 0;
    
}