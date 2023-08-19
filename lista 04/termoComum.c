//Leia dois vetores de inteiros v e w (máximo de 10 números).
//Os vetores v e w podem ter quantidades diferentes de números 
//Ao final, gere o vetor k com os números em comum de v e w. Imprima o vetor k. 

#include <stdio.h> 

void vetorComum(int tamV, int tamW, int v[], int w[], int k[]){
    int i, j; 
    for (i = 0; i < tamV; i++)
    {
        printf("Digite o valor na posição %d: ", i); 
        scanf("%d", &v[i]); 
    }
    for (i = 0; i < tamW; i++)
    {
        printf("Digite o valor na posição %d: ", i); 
        scanf("%d", &w[i]);
    }
    
    for (i = 0; i < tamV; i++)
    {
        for (j = 0; j < tamW; j++)
        {
            if (v[i] == w[j])
            {
                k[i] = v[i];
                printf("%d", k[i]); 
            }
            
        }
        
    }    
}

int main(){
    int n, m;
    printf("Digite o valor de n: ");
    scanf("%d", &n); 

    printf("Digite o valor de m: "); 
    scanf("%d", &m); 

    int v[n], w[m]; 
    
    if (n > m)
    {
        int k[n];
        vetorComum(n, m, v, w, k);
    }
    else
    {
        int k[m];
        vetorComum(n, m, v, w, k); 
    }
    
    

    return 0; 
}