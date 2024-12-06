// Write a program to check if a number or string is a palindrome.

#include <stdio.h>

int main() {
    int n, temp, LD;
    int rev = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    temp = n; // Store the original number in 'temp' to check later
    while (n > 0)
    {
        LD = n % 10; // Get the last digit of the number
        rev = rev * 10 + LD; // Append the last digit to the reversed number
        n /= 10; // Remove the last digit from the number
    }

    if (temp == rev)
    {
        printf("Number is a palidrome");
    }
    
    else 
    {
        printf("Number if not a palidrome");
    }
    
    return 0;
}