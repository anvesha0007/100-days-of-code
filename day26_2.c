//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*

#include <stdio.h>

int main()
{
    int i, j;

    // First group - 4 stars
    for (j = 1; j <= 4; j++)
    {
        printf("*");
    }
    printf("\n\n");

    // Second group - 5 stars
    for (j = 1; j <= 5; j++)
    {
        printf("*");
    }
    printf("\n\n");

    // Third group - 3 stars
    for (j = 1; j <= 3; j++)
    {
        printf("*");
    }
    printf("\n\n");

    // Fourth group - 1 star
    printf("*\n");

    return 0;
}

