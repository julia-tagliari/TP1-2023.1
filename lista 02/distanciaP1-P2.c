#include <stdio.h>
#include <math.h>

int main(){

    int x1, y1, x2, y2, subty, subt;
    float distancia;

    printf("Digite as coordenadas de P1 (x1, y1): ");
    scanf("%d %d", &x1, &y1); 

    printf("Digite as coordenadas de P2 (x2, y2): ");
    scanf("%d %d", &x2, &y2); 

    subt = x1 - x2;
    subty = y1 - y2; 

    distancia = sqrt(pow(subt, 2) + pow(subty, 2)); 

    printf("A distância entre p1 e p2 é igual a %.2f", distancia); 
    return 0; 
    

}