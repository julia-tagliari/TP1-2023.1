#include <stdio.h>
#include <math.h>

int main(){

    int n;

    printf("Digite o valor de n: "); 
    scanf("%d", &n); 

    if (n < 0){
        n = pow(n, 2); 
    }
    else {
        n = sqrt(n);
    }

    printf("O resultado é igual a: %d", n); 
    return 0; 
    

}