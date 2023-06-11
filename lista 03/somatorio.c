#include <stdio.h>

int main(){

    int n, m, somatorio, i, anterior; 

    printf("Digite o valor de n: ");
    scanf("%d", &n); 

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    if (m > n)
    {
        for (i = n; i <= m; i++)
        {
            somatorio = i + anterior; 
            anterior = somatorio; 
        }
        
    }
    else{
        printf("O valor de m deve ser maior que o valor de n"); 
    }

    printf("O somatório dos números é: %d", somatorio); 
}