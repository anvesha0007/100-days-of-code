```c
#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\nChoose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Result = %d", num1 + num2);
            break;

        case 2:
            printf("Result = %d", num1 - num2);
            break;

        case 3:
            printf("Result = %d", num1 * num2);
            break;

        case 4:
            if (num2 != 0)
                printf("Result = %.2f", (float)num1 / num2);
            else
                printf("Division by zero is not possible.");
            break;

        case 5:
            if (num2 != 0)
                printf("Result = %d", num1 % num2);
            else
                printf("Modulus by zero is not possible.");
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
```
