//Leia um vetor v de 10 inteiros e um valor inteiro k. Copie para um vetor w os elementos de v que são maiores que k
//Ao final, imprima o vetor w

#include <stdio.h>

void lerVetor(int v[], int tamanho, int k){
    int w[10]; 
    for (int i = 0; i <= tamanho; i++)
    {
        printf("Digite o valor na posição %d: ", i);
        scanf("%d", &v[i]);
    }
    
    for (int i = 0; i <= tamanho; i++)
    {
        if(v[i] > k)
        {
            w[i] = v[i];
            printf("%d\n", w[i]); 
        }
         
    }
    
}

int main(){
    int v[10], k; 
     
    printf("Digite o valor de k: ");
    scanf("%d", &k);

    lerVetor(v, 10, k); 
    return 0; 
}