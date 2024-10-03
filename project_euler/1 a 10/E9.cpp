//A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
//a^2 + b^2 = c^2
//For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.
//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc

#include <stdio.h>


int main(){
        int a = 1, b = 2, c = 3;
        long long resultado;
        for(a = 1; a < b; a++){

                for(b = a + 1; b < c; b++){                     //pra mim isso foi meio força bruta, aceito sujestões

                        c = 1000 - a - b;
                        if(c * c == (a * a) + (b * b) && a<b<c){
                                resultado = a * b * c;
                                printf("%lld", resultado);
                        }
                }
        }

        }
        
    
    
