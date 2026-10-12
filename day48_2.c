//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main()
{
    char str[200], temp;
    int i, start = 0, end;

    printf("Enter a sentence: ");
    scanf("%199[^\n]", str);

    for (i = 0; ; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;

            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            if (str[i] == '\0')
                break;

            start = i + 1;
        }
    }

    printf("Modified sentence: %s", str);

    return 0;
}

