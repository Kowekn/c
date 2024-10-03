#include <stdio.h>   
#include <stdlib.h> 


int main() {
    int x= 2, pivo=1, y=1, s=0;
    
    for(int i=x; i<4000000; i=x){
        if(x%2 == 0){
            s+=x;
        }
        pivo = x;
        x += y;
        y = pivo;
        
        printf("%d ",i);
    }
    printf("\n%d", s);
}