//Leia uma matriz quadrada de inteiros m(4x4) e exiba os elementos que estão em linhas pares e colunas impares. 


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

void linhasColunas(int m[4][4]){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i % 2 == 0 && j % 2 != 0)
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
    linhasColunas(m); 
    return 0; 
}