/*
Write a C program to find the largest among three numbers. The program should
take three numbers as input from the user.
*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    int max;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find maximum
    max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;

    printf("Maximum: %d\n", max);

    return 0;
}
