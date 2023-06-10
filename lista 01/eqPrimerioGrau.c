#include <stdio.h> 
#include <math.h> 

int main()
{
    float x, a, b; 

    printf("Digite o valor de 'A': "); 
    scanf("%f", &a); 

    printf("Digite o valor de 'B': "); 
    scanf("%f", &b);

    x = - b / a; 

    printf("O valor de x é: %.1f", x); 
    return 0; 

}