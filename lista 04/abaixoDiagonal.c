//Leia uma matriz quadrada de inteiros m(4x4) e exiba os elementos que se encontram abaixo da diagonal principal 
//e o produto deles. 

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

void abaixoDiagonal(int m[4][4]) {
    int produto = 1; 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                printf("%d ", m[i][j]);
                produto = produto * m[i][j]; 
            }
            else
            {
                printf("0 ");
            }
            
        }
        printf("\n");  
    }
    printf("%d", produto);   
}

int main(){
    int m[4][4]; 

    lerMatriz(m);
    abaixoDiagonal(m); 
    return 0; 
}