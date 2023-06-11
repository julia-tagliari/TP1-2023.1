#include <stdio.h>

int main(){

    float nota; 

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota <= 10 && nota >= 9){
        printf("Conceito A");
    }
    else if(nota <= 8.9 && nota >= 7){
        printf("Conceito B");
    }
    else if (nota <= 6.9 && nota >= 5){
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