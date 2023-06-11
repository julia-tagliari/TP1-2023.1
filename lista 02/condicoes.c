#include <stdio.h>

int main(){
    int n; 

    printf("Digite o valor de n: ");
    scanf("%d", &n); 

    if (n == 5){
        printf("O valor é igual a 5"); 
    }
    else if (n == 200){
        printf("O valor é igual a 200");
    }
    else if (n == 400){
        printf("O valor é igual a 400"); 
    }
    else if (n >= 500 && n <= 1000){
        printf("O valor está entre 500 e 1000");
    }
    else{
        printf("O valor não obedece nenhuma condição"); 
    }
    return 0;
}