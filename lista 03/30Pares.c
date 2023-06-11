#include <stdio.h> 

    int main(){
    int i=0, cont=0;
    do{
        if (i % 2 != 0){
        printf("%d\n",i);
        cont++;
            
        }
        i++;
        
    }while(cont<30);

    return 0;
}