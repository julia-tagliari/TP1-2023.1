#include <stdio.h>

int main(){

    int num, somatorio, anterior = 0, impar = 0; 
    
    do{
        printf("Digite um número inteiro: ");
        scanf("%d", &num); 
        if (num % 2 != 0)
        {
            impar++; 
            somatorio = anterior + num; 
            anterior = num;
        }
        
    } while (num != 0);
    
    printf("A quantidade de números ímpares é: %d\n", impar);
    printf("A soma dos valores digitados é: %d", somatorio); 
    return 0; 
}