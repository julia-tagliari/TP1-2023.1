//Leia um vetor v de 10 inteiros e imprima os números pares de trás para frente.

#include <stdio.h>

void vetorPar(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);     
    }

    for (int i = tamanho - 1; i >= 0; i--)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("%d\n", vetor[i]); 
        }
         
    }
    
}


int main(){
    int vetor[10]; 

    vetorPar(vetor, 10);
    return 0; 
}