//Leia uma matriz quadrada de inteiros m(4x4) e exiba os elementos que se encontram acima da diagonal principal
//e a soma deles

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

void acimaDiagonal(int m[4][4]){
    int soma = 0; 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i < j)
            {
                soma += m[i][j]; 
                printf("%d ", m[i][j]);
            }
            else
            {
                printf("0 "); 
            }
            
        }
        printf("\n"); 
    }
    
    printf("%d", soma); 
}

int main(){
    int m[4][4]; 

    lerMatriz(m); 
    acimaDiagonal(m); 
    return 0; 
}