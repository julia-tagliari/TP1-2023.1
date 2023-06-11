#include <stdio.h>

int main(){
    int n; 

    printf("Digite um número inteiro: ");
    scanf("%d", &n); 

    if (n % 3 == 0 )
    {
        printf("Este número é divisível por 3"); 
    }
    if(n % 7 == 0){
        printf(" e este número é divisível por 7.");
    }
    return 0; 
    
}