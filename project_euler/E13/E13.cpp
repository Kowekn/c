/*Work out the first ten digits of the sum of the following one-hundred 50-digit numbers. jesus cristo

*/
#define longg unsigned long long

#include <stdio.h>
#include <conio.h>



longg soma = 0;

int main(){
    FILE *fp= fopen("E13.txt","r");
    char ch; 
    int soma[100], soma_[100];
    
    int posicao = 50;
    for(int i = 0; i <= 100; i++){
        soma[i] = 0;
        soma_[i] = 0;
    }
    for(int linha = 1; linha <= 100; ) {
        ch = getc(fp);
        
        if(ch == '\n'){
           
            linha++;
            for(int i = 0; i <= 100; i++){
                if(soma_[i] + soma[i] >= 10 ){
                    soma[i] = (soma[i] + soma_[i]) - 10;
                    soma[i+1] += 1;
                    
                    
                    soma_[i] = 0;
                    continue;
                }
                soma[i] += soma_[i];
                soma_[i] = 0;
            }
            posicao = 50;
            continue;
            }
        soma_[posicao] = ch - 48;
        posicao -= 1;
        
    }
    fclose(fp);
    
    for(int i = 100; i > 0; i--){
        printf("%d", soma[i]);
    }
}