//Leia um vetor v de 10 inteiros e um número inteiro k. Ao final, imprima os números de v que são múltiplos de k. 

#include <stdio.h>

void multiplos(int v[], int tamanho, int k){
    for (int i = 0; i <= tamanho; i++)
    {
        printf("Digite o valor na posição %d: ", i);
        scanf("%d", &v[i]); 
    }
    for (int i = 0; i <= tamanho; i++)
    {
        int multiplo = k * v[i]; 
        printf("%d\n", multiplo); 
    
    }
        
}

int main(){
    int v[10], k;
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    multiplos(v, 10, k);
    return 0; 
}