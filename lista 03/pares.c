#include <stdio.h>
#include <math.h>

int main(){

    int num, pares = 0; 

    do
    {
        printf("Digite um número inteiro: "); 
        scanf("%d", &num); 

        if (num % 2 == 0 && num != 0)
        {
            pares++;
        }
        
    } while (num != 0);

    printf("O total de números pares é: %d\n", pares);
    return 0; 
    
}