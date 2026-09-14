```c id="x9m4kp"
#include <stdio.h>

int main()
{
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    printf("1's Complement = ");

    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
        {
            printf("1");
        }
        else if (binary[i] == '1')
        {
            printf("0");
        }
        else
        {
            printf("\nInvalid binary number!");
            return 0;
        }
    }

    return 0;
}
```
