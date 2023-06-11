#include <stdio.h>

int main(){

    int salario, financiamento;  
    printf("Digite o valor do seu salário: ");
    scanf("%d", &salario); 

    financiamento = 100000;

    if (financiamento <= (salario * 5)){
        printf("Financiamento Concedido");
    }
    else{
        printf("Financiamento Negado"); 
    }
}