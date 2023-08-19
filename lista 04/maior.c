//Leia um vetor v de 10 inteiros. Em seguida, imprima os números de v colocando a letra 'p' ao lado do maior par
//e 'i' ao lado do maior impar.

#include <stdio.h>

void percorreVetor(int v[], int tamanho){
    int maiorp = 0, maiori = 0; 
    int i, j; 
    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o valor na posição %d: "); 
        scanf("%d", &v[i]);
    }

    for (i = 0; i < tamano; i++)
    {
        if (v[i] % 2 == 0)
        {
            maiorp = v[i];
        }
        else
        {
            if (v[i] > maiori)
            {
                maiori = v[i]; 
            }
            
        }
    }
    
    for (i = 0; i < tamanho; i++)
    {
        if (v[i] == maiorp)
        {
            printf("%d p\n", maiorp);
        }
        else if (v[i] == maiori)
        {
            printf("%d i\n", maiori); 
        }
        else
        {
            printf("%d\n", v[i]);
        }
    }
}

int main(){
    int v[4]; 

    percorrerVetor(v, 4); 
    return 0; 
}