//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main()
{
    int num, first, last, divisor, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the last digit
    last = num % 10;

    // Find the divisor to get the first digit
    divisor = 1;
    while (num / divisor >= 10)
    {
        divisor = divisor * 10;
    }

    // Find the first digit
    first = num / divisor;

    // Find the middle part
    middle = (num % divisor) / 10;

    // Swap first and last digits
    result = last * divisor + middle * 10 + first;

    printf("Number after swapping first and last digit = %d", result);

    return 0;
}

