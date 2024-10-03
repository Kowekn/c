/*
By starting at the top of the triangle below and moving to adjacent numbers on the row below, 
the maximum total from top to bottom is 23.
     3 
    7 4
   2 4 6
  8 5 9 3
That is, 3 + 7 + 4 + 9 = 23.
Find the maximum total from top to bottom of the triangle below:

75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23

NOTE: As there are only 16384 routes, it is possible to solve this problem by trying every route. 
However, Problem 67, is the same challenge with a triangle containing one-hundred rows;
it cannot be solved by brute force, and requires a clever method! ;o)


*/



#define longg unsigned long long

#include <stdio.h>
#include <conio.h>

FILE *fb = fopen("18.txt", "r"); // tive problemas com Invalid argument pra funcao faz, vi que talvez fosse ter o mesmo nome mas nesse caso transforma-la em variavel global resolveu

int faz(int *vetor_maior, int *maiores, int index, int valores[][15], FILE *f ){
    int soma[2] {0, 0};
    int maior = 0;
    int ref = 0;
    char buff = getc(f);
    if(f == NULL){
        perror("aaaaaa");
    }
    while(buff != '\n'){
        if(buff == 32){
            buff = getc(f);
            continue;}
        soma[0] = buff - 48;
        
        soma[1] = getc(f) - 48;
        ref++;
        valores[index][ref-1] = (soma[0]*10 + soma[1]);
        if((soma[0]*10 + soma[1])> maior){
            maior = (soma[0]*10 + soma[1]);
            vetor_maior[index] = ref-1;
            maiores[index] = maior;
        }
        buff = getc(f);
    }

    
}

void inicializar_matriz(int matrix[][15]){
    for(int i = 0; i<=15; i++){
        for(int c = 0; c<=15; c++){
            matrix[i][c] = 0;
        }
    }
}

int vai_passando(int *vetor_maior, int *maiores, int valores[][15]){
    int soma = 0;
    
    int posicao[2][1] = {{0}, {0}};
    for(int i = 0; i<15; i++){ 
        if(vetor_maior[i] == posicao[1][0] || vetor_maior[i] == posicao[1][0] + 1 ){
            soma += maiores[i];
            posicao[0][0] += 1;
            posicao[1][0] = vetor_maior[i];
            continue;
            }
      /*  int maior = 0;
        for(int a = 0; a<i; a++){ 
            if(a == posicao[1][0])
                if(valores[i][a] > valores[i][a+1]){
                    maior = valores[i][a];
                    posicao[1][0] = a;
                }                                   //nao funcionou com observacao proxima
                else{
                    maior = valores[i][a+1];
                    posicao[1][0] = a+1;
                }
        }
        posicao[0][0] += 1;
        soma += maior;*/

        
    }
    return soma;
}
int main(){
    
    int valores[15][15];
    int vetor_maior[15];
    int maiores[15];
             
         
    inicializar_matriz(valores);
    for(int i=0; i<15; i++){
        faz(vetor_maior, maiores, i, valores, fb);
    }
    
    int soma = vai_passando(vetor_maior, maiores, valores);
    printf("%d", soma);
}