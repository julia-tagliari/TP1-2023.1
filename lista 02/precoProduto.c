#include <stdio.h>

int main(){

    float valor, total, parcela;
    int opcao;    

    printf("Digite o preço a ser pago: ");
    scanf("%f", &valor);

    printf("Digite a forma de pagamento: \n"); 
    printf("1 - A vista, dinheiro ou cheque, 10%% de desconto\n");
    printf("2 - A vista, cartão de crédito, 5%% de desconto\n");
    printf("3 - Em 2x, preço normal sem juros\n");
    printf("4 - 3x, preço normal + 10%% de juros\n");
    printf("==================================\n");
    scanf("%d", &opcao);




    switch (opcao)
    {
    case 1: 
        total = valor - (0.10 * valor); 
        printf("O valor a ser pago é %.2f", total);
        break;
    case 2:
        total = valor - (0.05 * valor); 
        printf("O valor a ser pago é %.2f", total); 
        break;
    case 3: 
        total = valor;
        parcela = total/2;
        printf("O valor de cada parcela é %.2f e o total é %.2f", parcela, total);
        break; 
    case 4: 
        total = valor + (0.10 * valor);
        parcela = total/3;
        printf("O valor de cada parcela é %.2f e o total é %.2f", parcela, total); 
        break;
    default:
        printf("Inválido");
        break;
    }
    return 0; 
    
}