//Leia um vetor de inteiros v (máximo de 20 números), um número n e uma posição p.
//Em seguida, insira o número n na posição p do vetor (deslocando os demais números para a direita) e imprima v. 
//Caso a posição p seja inválida, apresente uma mensagem de erro. 

void deslocarDireita(int v[], int tamanho, int numero, int posicao){
    int aux; 
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o valor na posição %d: ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        if (i == posicao)
        {
            for (int j = posicao; j < tamanho; j++)
            {
                
                aux = v[i]; 
                v[i] = numero;
            }
             
        }
        
    }
    
}

int main(){
    int k, p, n; 

    printf("Digite o tamanho do vetor v: ");
    scanf("%d", &k); 

    printf("Digite o valor de n: ");
    scanf("%d", &n); 

    printf("Digite a posição: ");
    scanf("%d", &p); 

    int v[k]; 

    deslocarDireita(v, k, n, p); 
}