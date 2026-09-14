//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main()
{
    int num, binary[32], i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num == 0)
    {
        printf("Binary representation = 0");
    }
    else
    {
        // Store binary digits
        while (num > 0)
        {
            binary[i] = num % 2;
            num = num / 2;
            i++;
        }

        printf("Binary representation = ");

        // Print digits in reverse order
        for (j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
    }

    return 0;
}

