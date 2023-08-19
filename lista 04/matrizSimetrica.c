//Leia uma matriz quadrada de inteiros m(5x5) e verifique se ela é simétrica
//ou seja, se os valores da linha 1 são iguais aos da coluna 1, os da linha 2 são iguais aos da coluna 2...
//Ao final, imprimir 'é simétrica' ou 'não é simétrica'

#include <stdio.h> 

void lerMatriz(int m[2][2]){
    printf("Digite o valor da matriz: "); 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &m[i][j]); 
        }
        
    }
    
    
}

void simet(int m[2][2], int simetria){
    simetria = 0; 

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (m[i][j] == m[j][i])
            {
                simetria = 1; 
            }
            
        }
        
    }

    if (simetria = 1)
    {
        printf("é simetrica");
    }
    else {
        printf("não é simétrica"); 
    }
    
   
}

int main(){
    int m[2][2], simetria;

    lerMatriz(m); 
    simet(m, simetria); 
    return 0; 
}