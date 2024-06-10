#include <stdio.h>   
#include <stdlib.h> 


int main() {
    int *pointer = (int *) malloc(sizeof(int)* 1000);
    int s;
    for(int i=0; i<1000; i++){
        pointer[i]=0;
    }
    for(int i = 3; i<1000; i += 3){
        pointer[i] = 1;
    }
    for(int i = 5; i<1000; i += 5){
        pointer[i] = 1;
    }
    for(int i=1; i<1000; i++){
        if(pointer[i]==1){
            s+=i;
        }
    }
    
    printf("%d", s);
    
};