#include <stdio.h> 

int main(){
    
    int i = 5, cont = 0;
    
    do{
        if(i % 5 == 0){
            
            printf("%d\n", i); 
            cont++;
        }
        i++; 
        
    }while (cont <= 20); 
    return 0; 
}