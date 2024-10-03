/*The following iterative sequence is defined for the set of positive integers:

n  n/2 (n is even)
n  3n + 1 (n is odd)
Using the rule above and starting with 13, we generate the following sequence:
13  40  20  10  5  16  8  4  2  1.
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.
Which starting number, under one million, produces the longest chain?
NOTE: Once the chain starts the terms are allowed to go above one million.*/

#define longg unsigned long long
#define mil 1000000
#include <stdio.h>

longg par(longg numero, longg contador);
longg impar(longg numero, longg contador);
longg separador(longg numero, longg contador);



int main(){
    longg maior = 0;
    
    
    for(longg i = mil - 1; i > 1; i--){
        longg contador = 1;
        contador = separador(i, contador);
        if(contador > maior){
            maior = contador;
            printf("contador: %lld, numero: %lld\n", maior, i);
        }
        contador = 1;
    }
}


longg separador(longg numero, longg contador){

    if(numero == 1){
        return contador;
    }
    contador++;
    if(numero % 2 == 0){
        return par(numero, contador);
    }
    else{
        return impar(numero, contador);
    }

}
longg par(longg numero, longg contador){
    return separador(numero/2, contador);
}

longg impar(longg numero, longg contador){
    return separador(numero*3 + 1, contador);
}

