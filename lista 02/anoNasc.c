#include <stdio.h>

int main(){

    int inicial, atual = 2023, idade; 

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &inicial);

    idade = atual - inicial;

    printf("Sua idade é %d\n", idade);

    if (idade >= 0 && idade < 3){
        printf("Um Bebê");
    }
    else if(idade >= 4 && idade <=10){
        printf("Uma Criança");
    }
    else if (idade >= 11 && idade <= 18){
        printf("Um Adolescente");
    }
    else if (idade >= 19 && idade <= 60){
        printf("Um Adulto");
    }
    else {
        printf("Um idoso");
    }
    
    
    return 0; 
}