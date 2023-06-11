#include <stdio.h>

int main(){

    int nota; 

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    if (nota == 10 || nota == 9){
        printf("Conceito A");
    }
    else if(nota == 8 || nota == 7){
        printf("Conceito B");
    }
    else if (nota == 6 || nota == 5){
        printf("Conceito C");
    }
    else if(nota < 5){
        printf("Conceito D");
    }
    else{
        printf("Inválida");
    }
    return 0; 
}