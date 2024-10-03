/*2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2^1000?
*/
#define longg unsigned long long 
#define mil 1000
#include <stdio.h>




int inicializar(int *lista){
    for(int i = 0; i<mil; i++){
        lista[i] = 0;
    }
    lista[0] = 2;
    return 0;
}

int duplica(int *lista){
    int tamanho = mil;
    for(; lista[tamanho] != 0; tamanho--){} 
    if(tamanho > mil){return 0;}
    for(int i = tamanho; i >= 0; i--){
        if(lista[i]*2 >= 10){
            lista[i+1] += lista[i]*2 / 10;
            lista[i] = lista[i]*2 - lista[i]*2 /10 *10; 
        }
        else{
            lista[i] = lista[i]*2;
        }
    }
    return 0;
}

int main(){
    int lista[mil];
    inicializar(lista);
    for(int i = 1; i< mil; i++){
        duplica(lista);
    }
    int tamanho = mil;
    for(; lista[tamanho] != 0; tamanho--){}
    int soma = 0;
    for(int i = tamanho; i>=0; i--){
        soma += lista[i];
    }
    printf("%d", soma);
}
