#include <stdio.h> 
#include <math.h> 

int main()
{
    int a1, n, r, an; 

    n = 10; 
    r = 2; 

    printf("Digite o primeiro termo: "); 
    scanf("%d", &a1); 

    an = a1 + (n - 1) * r; 

    printf("O n-ésimo termo da progressão é: %d", an); 
    return 0; 

}