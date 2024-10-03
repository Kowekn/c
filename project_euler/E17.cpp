/*If the numbers 1 to 5 are written out in words: one, two, three, four, five, 
then there are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, 
how many letters would be used? 

NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and forty-two) contains 23 letters 
and 115 (one hundred and fifteen) contains 20 letters. 

The use of "and" when writing out numbers is in compliance with British usage.

cabo as ideia no 17 ja
*/
#define longg unsigned long long
#define tres i/100  - i/1000*10 // ha ha ha
#define duo i/10 - i/100 *10 // ha ha ha 
#define unus i - (i/100 *100 + (i/10 *10 - i/100 *100))  // ha ha ha
#define nihil i/1000 // NIHIL NIHIL

#include <stdio.h>

//one two six ten four five nine three seven eight  
//eleven twelve thirteen fourteen fifteen sixteen seventeen eighteen nineteen
//twenty thirty forty fifty sixty seventy eighty ninety
//hundred and 
//thousand

int main(){
    int soma = 0;
    for(int i=1; i<=1000; i++){
        
        if((unus == 1 && duo == 1) || (unus == 2 && duo == 1)){
            soma += 6; //eleven twelve
            }
            

        if((unus == 3 && duo == 1) || (unus == 4 && duo == 1) || (unus == 8 && duo == 1) || (unus == 9 && duo == 1)){
            soma += 8; //thirteen fourteen eighteen nineteen
            }
        
        if((unus == 5 && duo == 1) || (unus == 6 && duo == 1)) {
            soma += 7; //fifteen sixteen
            }

        if(unus == 7 && duo == 1){
            soma += 9; //seventeen

}
        if((unus == 1 && duo != 1) || (unus == 2 && duo != 1) || (unus == 6 && duo != 1)){
            soma += 3; //one two six
}
        if((unus == 4 && duo != 1) || (unus == 5 && duo != 1) || (unus == 9 && duo != 1)){
            soma += 4; //four five nine
        }
        if((unus == 3 && duo != 1) || (unus == 7 && duo != 1) || (unus == 8 && duo != 1)){
            soma += 5; // three seven eight
        }

        if(duo == 1 && unus == 0){
            soma+= 3; // ten
        }

        if(duo == 2 || duo == 3 || duo == 8 || duo == 9){
            soma += 6; //twenty thirty eighty ninety
}
        if(duo == 4 || duo == 5 || duo == 6) {
            soma += 5; //forty fifty sixty
}
        if(duo == 7){
            soma += 7; //seventy
}
        if(tres == 1 || tres == 2 || tres == 6){
            soma += 3; //one two six
        }
        
        if(tres == 4 || tres == 5 || tres == 9){
            soma += 4; //four five nine
        }

        if(tres == 3 || tres == 7 || tres == 8){
            soma += 5; //three seven eight
        }



        if(tres > 0){
            soma += 7; //hundred
}
        if(tres > 0 && (duo > 0 || unus > 0)){
            soma += 3; //and
}
        if(nihil == 1){
            soma += 11;  //one thousand
        }
        
    }
    printf("%d", soma);
}