#include <stdio.h>
#include <string.h>

//questao 1
void fibonacci(int num, int pivo=1, int inicio=1){
    if(num == inicio){
        printf("\n%d? Este é um número da sequencia de Fibonacci!", num);
    }
    if(num < inicio){
        printf("\n%d? Infelizmente não está na sequencia de Fibonacci!", num);
    }
    else{
        fibonacci(num, pivo = inicio, inicio += pivo);
    }
}




//questao 2
void as(char palavra[]){ // passa uma string
    int numa = 0;
    int numA = 0;
    
    for(int index = 0; index <= strlen(palavra); index++){
        if(palavra[index] == 97){
            numa += 1;
        }
        if(palavra[index] == 65){
            numA += 1;
        }
    }
    if(numa > 0 || numA > 0){
        printf("\nTemos 'a's : %d 'a's, sendo %d minúsculas e %d maiúsculas", numa + numA ,numa, numA);
    }
    else{
        printf("\nSem 'a's? >:(");
        }
}






//questao 3
void soma(){
    //int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA)
    int index = 12;
    int soma = 0;
    int K = 1;
    while (K < index)
    {
        K ++;
        soma += K;
    }
    printf("\n%d", soma); //77
    
}

//questao 4
//a) 1, 3, 5, 7, ___=9
//1, 1+2, 3+2, 5+2, 7+2=9

//b) 2, 4, 8, 16, 32, 64, ____ =128
// 2^1, 2^2, 2^3, 2^4, 2^5, 2^6, 2^7 = 128 

//c) 0, 1, 4, 9, 16, 25, 36, ____=49
//0+0, 0+1, 1+3, 4+5, 9+7, 16+9, 25+11, 36+13=49

//d) 4, 16, 36, 64, ____=100
//4*1, 4*4, 4*9, 4*16, 4*25=100

//e) 1, 1, 2, 3, 5, 8, ____=13
//fibonacci 5+3, 8+5=13

//f) 2,10, 12, 16, 17, 18, 19, ____=21
//eu não sei




//questao 5
// Eu acredito que este problema não tem solução:
/* Mapeando um cenário com as informações passadas temos: 
 - 3 salas fechadas cada uma contendo uma lâmpada, não tendo visão para fora ou outras salas
 - uma outra sala contendo 3 interruptores, correspondendo a cada uma das 3 salas e sua respectiva lâmpada, não tendo visão para nenhuma das 3 salas
 - para inferir se uma das 3 salas têm sua lâmpada acesa, é preciso entrar na sala
 - durante o desafio, o desafiado pode adentrar uma das 3 salas 2 vezes, isto é, sair da sala dos interruptores para uma das 3 salas e voltar para sala dos interruptores, sem adentrar outra sala de lâmpada
 - o desafio também implica que sabemos se um devido interruptor está ligado ou desligado

para o desafio eu vou nomear as salas de lâmpada como sala 1, 2 e 3 e os interruptores como A, B e C
como não há sentido em deixar os interruptores todos ligados ou desligados, vou deixar 2 ligados, suponho A e B
então entro na sala 1. existem apenas 2 situações, sua lâmpada estar ligada ou desligada, se estiver desligada, ótimo, mas para demonstrar meu ponto vou supor que está ligada
com isso a sala 1 deve ser o interruptor A ou B
a partir daí, não existe combinação de interruptores que nos leva a descobrir qual é o interruptor da sala 1 ou de qualquer outra sala, pois chegaremos na mesma situação onde a sala deve ser entre 2 interruptores
deixar os interruptores como estão e ir na sala 2 só será de ajuda se sua lâmpada estiver desligada, e mesmo assim, não é possivel saber se a sala 1 é do interruptor A ou B
deixando o interruptor B e C ligados e ir na sala 1 ou 2 por exemplo, não resolve os nossos problemas. se 1 estiver ligada, significa que seu interruptor é B, mas não saberemos da sala 2 ou 3,
se formos à sala 2 e estiver ligada, ela poderá ser do interruptor B ou C, também não respondendo sobre a sala 1 ou 3
deixando apenas a C ligada e entrar na sala 2 só será de ajuda se estiver ligada, caso contrário, ela deverá ser entre o interruptor A ou B

espero que tenho exemplificado como com apenas 2 visitas não há uma resposta para o desafio

supondo que por acaso havia a intenção de fazer um desafio com uma resposta correta:
a unica forma que consegui pensar que haveria uma resposta é se existisse apenas uma sala com as 3 lâmpadas e outra sala com os interruptores
o desafio ficaria bem mais simples:
 -deixar ligado 2 interruptores
 -checar qual lampada está desligada
 -desligar 1 dos interruptores ligados
 -checar qual desligou

caso contrário, eu realmente não achei uma solução

*/

int main(){
    int numero = 1651;
    fibonacci(numero);

    char palavra[] = "Ola bem vindo como voce esta? AAAAAHHHHH";
    as(palavra);

    soma();
}