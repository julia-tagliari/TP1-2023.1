#include <stdio.h>

int main(){

    int n;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n % 6 == 0){
        printf("Este número é divisivel por 6.");
    }
    else{
        printf("Este número não é divisivel por 6.");
    }
    return 0; 
}