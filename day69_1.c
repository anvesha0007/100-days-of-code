//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i, repeated = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    int count[n + 1];

    for(i = 0; i <= n; i++) {
        count[i] = 0;
    }

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        count[arr[i]]++;

        if(count[arr[i]] == 2) {
            repeated = arr[i];
        }
    }

    printf("Repeated element = %d", repeated);

    return 0;
}
