//Count frequency of a given character in a string.
#include <stdio.h>

int main()
{
    char str[100], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}

