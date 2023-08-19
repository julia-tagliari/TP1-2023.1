//Leia um vetor v com 10 números reais. 
//Em seguida, percorra o vetor v e imprima o valor e a metade do valor (se ele for menor que 10) 
//Ou o dobro do valor (se ele for maior ou igual a 10)

#include <stdio.h>

void imprimeValor(float vetor[], int tamanho){ 
    float metade = 0, dobro = 0; 
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor na posição %d: ", i);
        scanf("%f", &vetor[i]);     
        fflush(stdin);
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] < 10){
            metade = vetor[i] / 2;
            printf("%f %f\n", vetor[i], metade); 
        }
        else{
            dobro = vetor[i] * 2; 
            printf("%f %f\n", vetor[i], dobro); 
        }
    }
}

int main(){
    float vetor[2];
    
    imprimeValor(vetor, 2);
    return 0; 
}