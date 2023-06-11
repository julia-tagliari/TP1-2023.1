#include <stdio.h>

int main(){
    int n, k; 

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n, &k); 

    if (n % k == 0){
        printf("O número %d é divisível por %d", n, k);
    }
    else{
        printf("O número %d não é divisível por %d", n, k); 
    }
    return 0; 
    
}