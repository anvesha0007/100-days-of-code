```c
#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        if (number == 0)
        {
            printf("%d is zero.", number);
        }
        else
        {
            printf("%d is positive.", number);
        }
    }
    else
    {
        printf("%d is negative.", number);
    }

    return 0;
}
```
