#include <stdio.h>

int main(){

    int n, m, aux, i;

        printf("Digite o valor de n: ");
        scanf("%d", &n);

        printf("Digite o valor de m: ");
        scanf("%d", &m); 

        if (n > m)
        {
            aux = n; 
            n = m;
            m = aux;
            for (i = n; i <= m; i++)
            {
                if (i % 2 != 0)
                {
                    printf("%d\n", i); 
                }
            }
        }
        else{
            for (i = n; i <= m; i++)
            {
                if (i % 2 != 0)
                {
                    printf("%d\n", i); 
                }
                
            }
        }
    return 0; 
}