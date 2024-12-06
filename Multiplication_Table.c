// Write a program to to Print the table, ask user to enter the number

#include <stdio.h>

int main() 
{
    int n, r, i;

    // Asking user to give a number for which a table will be printed 
    printf("Enter a Number: "); 
    scanf("%d", &n);

    // The number of rows must be printed 
    printf("Enter Number of Rows: ");
    scanf("%d", &r);

    printf("Table for this number is: %d\n", n);
    for (i = 1; i <= r; i++)
    {
        // It will print the multiplication of rows and the number which the user has given
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}