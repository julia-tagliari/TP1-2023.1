#include <stdio.h>
#include <math.h>

int main(){

    int num, raiz; 

    do
    {
        printf("Digite um número inteiro (Caso queira encerrar, digite 0): ");
        scanf("%d", &num);
        if (num > 0){
            raiz = sqrt(num); 
             printf("Raiz de %d = %d\n", num, raiz);
        }
        else{
            printf("Não é possível extrair a raíz do número\n");
        }
        
    } while (num != 0);

    return 0; 
}