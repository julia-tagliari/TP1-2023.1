
#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int lado, volume; 

        printf("Digite o valor do lado: ");
        scanf("%d", &lado);

        volume = lado * lado * lado; 

        printf("\n O valor do volume é: %d", volume);
        return 0; 
}