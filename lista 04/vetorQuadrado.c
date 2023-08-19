//Leia um vetor v de 10 inteiros e gere outro vetor w contendo os elementos de v ao quadrado. 
//imprima w. 

#include <stdio.h>
#include <math.h>

void vetorQuadrado(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = pow(vetor[i], 2); 
        printf("O novo valor da posição %d é %d\n", i, vetor[i]);
    }
}

int main(){
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vetorQuadrado(vetor, 10);
    return 0; 
}