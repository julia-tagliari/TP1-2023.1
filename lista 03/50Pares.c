#include <stdio.h> 

int main (){
    
    int i = 2; int cont = 0; 
    
    do{
        if (i % 2 == 0){
            
            printf("%d\n", i);
            cont++;
        }
        i++;
        
    }while(cont <= 50);
    return 0; 
}