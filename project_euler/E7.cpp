//By listing the first six prime numbers: 2,3,5,7,11 and 13, we can see that the 6th prime is 13 
//What is the 10001st prime number?

#include <stdio.h>

int len = 10001;
int *lista_primo = new int[len];



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
    inicializar(lista_primo);
    
    int contador = 3;
    while(lista_primo[10001]==0){
        dividir(lista_primo, contador);
        contador += 1;
        
    }
    printf("%d", lista_primo[len]);
    
    return 0;
}
