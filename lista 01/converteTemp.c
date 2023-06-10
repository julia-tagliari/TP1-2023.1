#include <stdio.h> 
#include <math.h>

int main()
{
    int celsius; 
    float fahrenheit; 

    printf("Digite uma temperatura em graus celsius: ");
    scanf("%d", &celsius); 

    fahrenheit = (9 * celsius + 160) / 5;

    printf("O valor em graus Fahrenheit é de: %.1f", fahrenheit);
    return 0; 
}