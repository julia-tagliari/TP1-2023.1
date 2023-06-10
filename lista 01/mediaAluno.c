#include <stdio.h> 
#include <math.h> 

int main()
{
    float n1, n2, n3, p1, p2, p3, media;

    p1 = 2.0;
    p2 = 5.0;
    p3 = 1.0;

    printf("Digite suas 3 últimas notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3); 

    printf("Sua média é igual a: %.2f", media); 
    return 0; 


}