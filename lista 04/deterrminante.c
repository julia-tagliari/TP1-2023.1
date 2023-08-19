//Leia uma matriz quadrada de inteiros m(4x4) e imprima todos os elementos, exceto os da diagonal principal

#include <stdio.h> 
void lerMatriz(int m[4][4]){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o valor na posição (%d, %d): ", i, j); 
            scanf("%d", &m[i][j]);
        }
        
    }
    
}

void imprimeElementos(int m[4][4]){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (m[i] != m[j])
            {
                printf("%d ", m[i][j]); 
            }
            else
            {
                printf("0 "); 
            }
        }
        printf("\n"); 
    }
    
}

int main(){
    int m[4][4]; 

    lerMatriz(m); 
    imprimeElementos(m); 
}
