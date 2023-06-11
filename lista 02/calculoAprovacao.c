#include <stdio.h>

int main(){

    int faltas;
    float media, nota1, nota2, trabalho;  

    printf("Digite a primeira nota: \n");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf("Digite a quantidade de faltas: \n");
    scanf("%d", &faltas); 

    printf("Digite a nota do trabalho: \n");
    scanf("%f", &trabalho);

    media = (nota1 * 3) + (nota2 * 5) + (trabalho * 2) / 10; 

    if (faltas > 15){
        printf("Reprovado");
    }
    else if(faltas < 15 && media >= 7){
        printf("Aprovado");
    }
    else if (faltas < 15 && media < 4){
        printf("Reprovado");
    }
    else{
        printf("Prova Final");
    }
    return 0; 
}