//The largest palindrome made from the product of two 2-digit number is 9009 = 91 x 99
//find the largest palindrome made from the product of two 3-digit numbers
#include <stdio.h>
#include <cstdlib>

int cm, dm, m, c, d, u, conta;
int pivo= 0, maior= 0;
const int cemm = 100000;
const int dezm = 10000;
const int mil = 1000;
const int cem = 100;
const int dez = 10;

int main(){
    for(int i= 999; i>0; --i){
         
        for(int l=999; l>0; --l){
           
            conta = l * i;
            
            cm = conta/cemm;
            
            dm = conta/dezm - (cm*dez);
            if(cm == 0 && dm ==0){
                pivo=1;
            }
            m = conta/mil - (dm*dez) - (cm*cem);
            c = conta/cem - (m*dez) - (dm*cem) - (cm*mil);
            if(pivo == 1 && m == 0 && m ==0){
                pivo=2;
            }
            d = conta/dez - (c*dez) - (m*cem) - (dm*mil) - (cm*dezm);
            u = conta - (d*dez) -(c*cem) - (m*mil) - (dm*dezm) - (cm*cemm);
            if(pivo==2){
                pivo = 0;
                if(d==u){
                   if(maior < conta){
                            maior = conta;
                            printf("\nvalor 1: %d\nvalor 2: %d\n conta: %d\n ", i, l, conta);
                        } 
                }
            }
            if(pivo==1){
                
                    pivo=0;
                    if(m==u && c==d){
                        if(maior<conta){
                            maior = conta;
                            printf("\nvalor 1: %d\nvalor 2: %d\n conta: %d\n ", i, l, conta);
                        }
                    }
                    
                }
            if (cm == u && dm == d && m == c){
                if(maior<conta){
                    maior = conta;
                    
                    printf("\nvalor 1: %d\nvalor 2: %d\n conta: %d\n ", i, l, conta);
            }
            
}   
       



        }

    }


}