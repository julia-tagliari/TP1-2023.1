#include <stdio.h>

int main(){
    int quantidade;
    float desconto, total, preco; 

    preco = 15.00;

    printf("Digite a quantidade de peças: "); 
    scanf("%d", &quantidade); 

    total = quantidade * preco; 

    if (total > 200)
    {
        desconto = total - (0.2 * total); 
        printf("O valor total é igual a %.2f", desconto); 
    }
    else {
        printf("O valor total é igual a %.2f", total); 
    }
    return 0; 

}