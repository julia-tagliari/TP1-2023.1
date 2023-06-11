#include <stdio.h>

int main(){

    int contador = 0, valor, i, fora = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20)
        {
            contador++; 
        }
        else{
            fora++;
        }
         
    }

    printf("Valores dentro intervalo: %d\n", contador);
    printf("Valores fora do intervalo: %d", fora);  
    return 0;
    
}