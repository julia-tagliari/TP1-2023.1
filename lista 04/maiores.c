//Leia um vetor v de 10 inteiros e um valor k e imprima quantos elementos são maiores que k

#include <stdio.h>

int calculaMaior(int vetor[], int tamanho, int k){
    int cont = 0;
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor na posição %d: ", i);
        scanf("%d", &vetor[i]); 
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] > k)
        {
            cont++;
        }
        
    }
    
    return cont; 
}

int main(){
    int vetor[10], k, contagem;  

    printf("Digite o valor de k: "); 
    scanf("%d", &k); 

    contagem = calculaMaior(vetor, 10, k);
    printf("O número de valores acima de k é igual a: %d", contagem); 
    return 0;  
}