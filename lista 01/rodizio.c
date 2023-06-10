#include <stdio.h> 
#include <math.h> 

int main()
{
   int a, b, c, aux; 

   printf("Digite o valor de A: "); 
   scanf("%d", &a); 

   printf("Digite o valor de B: "); 
   scanf("%d", &b); 

   printf("Digite o valor de C: "); 
   scanf("%d", &c);

   aux = a;
   a = c;
   c = b;   
   b = aux;

   printf("Os novos valores são %d, %d e %d", a, b, c); 
   return 0;  
}