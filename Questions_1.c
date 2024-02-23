//1. Write a C function to calculate the sum of two integers.

#include<stdio.h>


int Sum(int Number1 , int Number2){
    return Number1 + Number2 ;
}
int main(){
    int number1 , number2 ;
    printf("Enter the first number :");
    scanf("%d" , &number1);
    printf("Enter the Second number :");
    scanf("%d" , &number2);

    printf("%d" , Sum(number1 , number2));
}