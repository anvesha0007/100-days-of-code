```c
#include <stdio.h>

int main()
{
    int arr[100], n, element, i, position;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the appropriate position
    position = 0;
    while (position < n && arr[position] < element)
    {
        position++;
    }

    // Shift elements to the right
    for (i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[position] = element;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```
