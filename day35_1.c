//Find the second largest element in an array.
#include <stdio.h>

int main()
{
    int a[100], n, i, largest, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (n < 2)
    {
        printf("Second largest does not exist");
        return 0;
    }

    largest = second = -2147483648;

    for (i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if (a[i] > second && a[i] < largest)
        {
            second = a[i];
        }
    }

    if (second == -2147483648)
        printf("Second largest does not exist");
    else
        printf("Second largest element = %d", second);

    return 0;
}

