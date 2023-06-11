#include <stdio.h>

int main(){

    int horast;
    float valorhora, bruto, liquido, ir; 

    printf("Digite as horas trabalhadas: ");
    scanf("%d", &horast); 

    printf("Digite o valor da hora: ");
    scanf("%f", &valorhora);

    bruto = horast * valorhora; 
    
    if (bruto <= 1900){
        ir = 0;
    }
    else if (bruto > 1900 || bruto <= 4300){
        ir = 0.10;
    }
    else if (bruto > 4300 || bruto <= 5800){
        ir = 0.15;
    }
    else{
        ir = 0.275;
    }
    
    liquido = bruto - (bruto * ir); 

    printf("Salário Bruto: %.2f\n", bruto);
    printf("Salário Líquido: %.2f\n", liquido);
    return 0; 

    
}