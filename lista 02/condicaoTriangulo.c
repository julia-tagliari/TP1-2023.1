#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, p, area; 

    printf("Digite o valor de a, b e c: ");
    scanf("%d %d %d", &a, &b, &c); 

    if (a < b + c && b < a + c && c < a + b){
        printf("Os valores formam um triângulo\n"); 

        p = (a + b + c) / 2; 
        area = sqrt(p * (p - a) * (p - b) * (p - c)); 

        printf("O valor do perimetro é igual a %d e o valor da área é igual a %d", p, area); 
    
    }
    else{
        printf("Os valores não formam um triângulo"); 
    }
    return 0; 
}