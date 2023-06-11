#include <stdio.h>

int main(){

    int conta, percentual = 0;
    float saldo; 

    do
    {
        printf("Digite sua conta bancára: ");
        scanf("%d", &conta);
        if(conta != 0){
            printf("Digite seu saldo: ");
            scanf("%f", &saldo);

        }
        
        if (saldo > 0){
            printf("Saldo Positivo\n");
        }
        else if (saldo < 0){
            printf("Saldo Negativo\n"); 
            percentual++; 
        }
        
    } while (conta != 0);

    printf("O percentual de contas com saldo negativo é: %d", percentual);
    return 0; 
    
}