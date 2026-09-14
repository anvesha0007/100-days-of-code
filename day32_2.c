```c id="p1x7rm"
#include <stdio.h>

int main()
{
    long long num, temp;
    int digit, i;
    int count[10] = {0};
    int maxCount = 0, mostFrequent;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = num;

    // Handle negative numbers
    if (temp < 0)
    {
        temp = -temp;
    }

    // Count frequency of each digit
    while (temp > 0)
    {
        digit = temp % 10;
        count[digit]++;
        temp = temp / 10;
    }

    // Find the digit with maximum frequency
    for (i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            mostFrequent = i;
        }
    }

    printf("Digit occurring the most times = %d\n", mostFrequent);
    printf("It occurs %d times.", maxCount);

    return 0;
}
```
