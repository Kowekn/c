//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17
//Find the sum of all the primes below two million
//vish

#include <stdio.h>
const int twomil = 2000000;
const int len = 160000;     //issaq eu comecei baixo e fui aumentando de acordo com o quanto q tava o maior primo
int primos[len];            //12,5 vezes menos espaco mas bem mais lento, quase 1 min vs ≅ 3 segundos (gloria ao futuro)

int inicializar(int *lista){
    lista[1]=2;
    for(int i = 2; i<=len; i++){
        lista[i]=0;
    }
    return 0;
}
int proximo(int *lista, int numero){
    
    for(int i=2; i<=len; i++){
        if(lista[i]==0){
            lista[i]=numero;
            return 0;
        }
        
    }
    return 1;
    
}
int dividir(int *lista, int numero){
    for(int i=1; i<=len; i++){
        if(lista[i]==0){
            proximo(lista, numero);
            return 0;
        }
        if(numero % lista[i]==0){
            break;
        }

    }
    return 1;
}

int main(){
        inicializar(primos);
    
        int ultimo = 1;
        int contador = 2;
        for(contador; primos[ultimo]<twomil && primos[len]==0; contador++){
                if(dividir(primos, contador) == 0){
                    ultimo++;
                }
                
        
        }
        unsigned long long soma = 0;
        for(int i = 1; i < ultimo; i++){
                soma += primos[i];
                
        }
        printf("\nsoma = %lld", soma);
        printf("\nultimo = %d", primos[ultimo-1]);
        
}

