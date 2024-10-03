//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17
//Find the sum of all the primes below two million
//vish

#include <stdio.h>
const int twomil = 2000000;
const int len = twomil;     
int primos[len];

int inicializar(int *lista){
    
    for(int i = 2; i<=len; i++){
        lista[i]=0;
    }
    
    return 0;
}

int multiplica(int *lista, int numero){
    if(lista[numero]==0){
        for(int i = numero + numero; i<=len; i += numero){
            lista[i] = 1;
        }
        return 0;
    }
}

int main(){
    inicializar(primos);
    
    for(int i = 2; i<=twomil; i++){
        multiplica(primos, i);
    }    
    unsigned long long soma = 0;
    for(int i = 2; i<=len; i++){
        if(primos[i]==0){
            soma+=i;
        }
    }
    printf("%lld", soma);
        
}

