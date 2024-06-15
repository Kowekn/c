//prime factors of 13195 are 5. 7. 13 and 29
// what is the largest prime factor of the number 600851475143

#include<stdio.h>  
int main(){
long long int n=600851475143, resultado;
int sai=0;


for(long long int i=3; i<n; i+=2){          //depois de algum tempo i se torna negativo (??????)
    
    
    if(n%i==0){
        
        for(long long int s=3; s<i; s+=2){
            if(i%s==0){
                
                sai = 1;
                break;
            }
        }
       
        if(sai==1){
            sai= 0;
            
            continue;
        }
        resultado= i;
        printf("%d, ", resultado);    //a ideia é que ao passar do tempo ele coloca primos em que n é divisivel e em algum momento será o maior divisivel
        continue;
    }
}

}