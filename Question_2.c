//2. Create a function to find the maximum of three numbers in C.

#include<stdio.h>

void max(int Number1 , int Number2 , int Number3){
    if (Number1 > Number2 && Number1 > Number3)
    {
        printf("%d" , Number1);
    }
    else if (Number2 > Number3 && Number2 > Number1){
        printf("%d" , Number2);
    }
    else
    {
        printf("%d" , Number3);
    } 
}

int main(){
    int number1 , number2 ,number3;
    printf("Enter the first number :");
    scanf("%d" , &number1);
    printf("Enter the Second number :");
    scanf("%d" , &number2);
    printf("Enter the Third number :");
    scanf("%d" , &number3);

    max(number1 , number2 , number3);

}