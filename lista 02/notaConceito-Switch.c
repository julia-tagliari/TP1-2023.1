#include <stdio.h>

int main(){

    int nota; 

    printf("Digite sua nota: ");
    scanf("%d", &nota);

    switch (nota)
    {
    case 10:
    case 9: 
        printf("Conceito A");
        break;
    case 8:
    case 7:
        printf("Conceito B");
        break;
    case 6:
    case 5: 
        printf("Conceito C");
        break; 
    case 4:
    case 3:
    case 2: 
    case 1: 
    case 0: 
        printf("Conceito E"); 
        break;
    default:
        printf("Inválida");
        break;
    }
    return 0; 
}