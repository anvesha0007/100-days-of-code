```c id="z6q1mt"
#include <stdio.h>

int main()
{
    int num1, num2, a, b, remainder, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    // Find HCF using Euclidean Algorithm
    while (b != 0)
    {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    hcf = a;

    // Calculate LCM
    lcm = (num1 * num2) / hcf;

    printf("LCM = %d", lcm);

    return 0;
}
```
