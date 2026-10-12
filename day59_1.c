//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main()
{
    int arr[100], n, k, i, j;
    int sum, maxSum;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid value of k\n");
        return 0;
    }

    sum = 0;

    for (i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    maxSum = sum;

    for (i = k; i < n; i++)
    {
        sum = sum - arr[i - k] + arr[i];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum subarray sum: %d\n", maxSum);

    return 0;
}

