//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];
    int i, j, len1, len2, found = 0;

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
            temp[i] = str1[i];

        for (i = 0; i < len1; i++)
            temp[len1 + i] = str1[i];

        temp[2 * len1] = '\0';

        for (i = 0; i < len1; i++)
        {
            for (j = 0; j < len1; j++)
            {
                if (temp[i + j] != str2[j])
                    break;
            }

            if (j == len1)
            {
                found = 1;
                break;
            }
        }
    }

    if (found == 1)
        printf("Strings are rotations");
    else
        printf("Strings are not rotations");

    return 0;
}

