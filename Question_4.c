//4. Write a C function to check if a given number is prime or not.

#include<stdio.h>

int prime(int Number){
    if (Number <= 1)
    {
        return 0 ;
    }
    else{
        for(int i = 2 ; i * i <= Number ; i++){
            if (Number % i == 0)
            {
                return 0 ; 
            }
            
        }
    }
    return 1;    
}
int main(){
    int Number ;
    printf("Enter the Number : ");
    scanf("%d" , &Number);
    if(prime(Number)){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}