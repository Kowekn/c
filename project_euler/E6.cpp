//the sum of the squares of the first ten natural numbers is 1**2 + 2**2 +...+10**2 =385
//the square of the sum of the first ten natural numbers is (1+2+..+10)**2 = 55**2 = 3025
//the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
//3025-385 = 2640
//find the difference between 
//the sum of the squares of the first one hundred natural numbers and the square of the sum

#include <stdio.h>

int sum_of_squares(){
    int sum=0;
    for(int i=1; i<=100; i++){
        sum+= i * i;
        }
    return sum;
}
int square = sum_of_squares();

int square_sum(){
    int sum = 0;
    for(int i=1; i<=100; i++){
        sum += i;
    }
    return sum * sum;
}
int sum = square_sum();

int main(){
    printf("%d",sum - square);

}
