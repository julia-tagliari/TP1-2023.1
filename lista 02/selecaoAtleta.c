#include <stdio.h>

int main(){
    float altura;
    int idade; 

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua idade: "); 
    scanf("%d", &idade); 

    if (altura >= 1.8 && idade < 18){
        printf("Selecionado");

    }
    else {
        printf("Não Selecionado");
    }
    return 0; 
    
}