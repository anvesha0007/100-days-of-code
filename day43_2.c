//Check if a string is a palindrome.
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[i] != '\0')
    {
        i++;
    }

    j = i - 1;

    for (i = 0; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");

    return 0;
}

