//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main()
{
    char name[100];
    int i = 0, j;

    printf("Enter your full name: ");
    scanf("%99[^\n]", name);

    printf("Formatted name: ");

    // Print initials of all names except surname
    while (name[i] != '\0')
    {
        if (name[i] != ' ' && (i == 0 || name[i - 1] == ' '))
        {
            j = i;

            while (name[j] != ' ' && name[j] != '\0')
                j++;

            if (name[j] == '\0')
            {
                // Print surname in full
                while (name[i] != '\0')
                    printf("%c", name[i++]);
                break;
            }

            printf("%c. ", name[i]);
        }

        while (name[i] != ' ' && name[i] != '\0')
            i++;

        while (name[i] == ' ')
            i++;
    }

    return 0;
}

