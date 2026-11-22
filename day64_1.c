//write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k;
    int maxLength = 0, length;

    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);

    for(i = 0; i < n; i++) {
        int visited[256] = {0};
        length = 0;

        for(j = i; j < n; j++) {
            if(visited[(unsigned char)s[j]] == 1) {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            length++;
        }

        if(length > maxLength) {
            maxLength = length;
        }
    }

    printf("Length of longest substring = %d", maxLength);

    return 0;
}
