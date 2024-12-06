// Write a program to Calculate the factorial of a number. Take a input from user

#include <stdio.h>

int main() 
{
    int num, i; 
        int fact = 1;

    printf("Enter a Number: ");
    scanf("%d", &num);
    
    if (num < 0 )
    {
        printf("Factorial of negative number does not exists");
    }
    
    else {
        for (i = 1; i <= num; i++)
        {
        fact = fact * i;
        }
        printf("The factorial of this number is: %d = %d\n", num, fact);
    }
    
    return 0;
}