//3. Implement a function to calculate the factorial of a non-negative integer in C.

#include<stdio.h>

int fact(int Number){
    int i , fact = 1 ;

    for(i=Number ; i>=1 ; i--){
        fact = fact * i;
    }
    printf("%d", fact);
}

int main(){
    int number1 ;
    printf("Enter the first number :");
    scanf("%d" , &number1);

    fact(number1);
}