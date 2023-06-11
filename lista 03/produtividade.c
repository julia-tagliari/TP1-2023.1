#include <stdio.h>

int main(){

    int matricula, produtividade; 
    float salario, novo; 

    do
    {
        printf("Digite a matrícula: "); 
        scanf("%d", &matricula); 
        
        if (matricula != 0 && matricula > 0)
        {
            printf("Digite o salário base: ");  
            scanf("%f", &salario); 

            printf("1 = Excelente\n");
            printf("2 = Bom\n");
            printf("3 = Regular\n");
            printf("Selecione o nível de produtividade: ");
            scanf("%d", &produtividade);

            switch (produtividade){
                case 1:
                    novo = salario + salario * 0.4; 
                    printf("%d\n", matricula); 
                    printf("%.2f\n", novo); 
                    break;
                
                case 2: 
                    novo = salario + salario * 0.2; 
                    printf("%d\n", matricula);
                    printf("%.2f\n", novo);
                    break;
                
                case 3: 
                    novo = salario + salario * 0.05; 
                    printf("%d\n", matricula);
                    printf("%.2f\n", novo);
                }

        }
        else{
            printf("ERRO");
        }

    } while (matricula !=0 && matricula > 0 );
    return 0; 
    
}