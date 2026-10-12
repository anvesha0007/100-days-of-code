//Check if two strings are anagrams of each other
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int freq[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    for (i = 0; str1[i] != '\0'; i++)
        freq[(unsigned char)str1[i]]++;

    for (i = 0; str2[i] != '\0'; i++)
        freq[(unsigned char)str2[i]]--;

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Strings are anagrams");
    else
        printf("Strings are not anagrams");

    return 0;
}

