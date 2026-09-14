```c
#include <stdio.h>

int main()
{
    int arr[100], n, search;
    int low, high, mid, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements in sorted order:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            printf("Element found at position %d.", mid + 1);
            return 0;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element not found.");

    return 0;
}
```

### 🖥️ Example Output

```text
Enter the number of elements: 5
Enter 5 elements in sorted order:
10 20 30 40 50
Enter the element to search: 40

Element found at position 4.
```

### 📌 Binary Search Logic

The array **must be sorted** first.

```text
10   20   30   40   50
          ↑
         MID
```

* If `arr[mid] == search` → **Element found**
* If `arr[mid] < search` → Search the **right half**
* If `arr[mid] > search` → Search the **left half**

This is faster than linear search for large sorted arrays.
