#include <stdio.h>

int main(){
    int a, b, c, maior, menor; 
    printf("Digite o valor de A: "); 
    scanf("%d", &a);
    printf("Digite o valor de B: "); 
    scanf("%d", &b); 
    printf("Digite o valor de C: "); 
    scanf("%d", &c);  

    if (a > b){
        maior = a;
        menor = b;  
    }
    else {
        maior = b;
        menor = a;
    }

    if (c > maior){
        maior = c; 
    }
    else {
        menor = c;
    }
    printf("O maior valor é %d e o menor valor é %d", maior, menor);
    return 0; 
}
