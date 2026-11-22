//Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[30];
    enum Gender gender;
};

int main() {
    struct Person p = {"Rahul", MALE};

    printf("Name: %s\n", p.name);

    switch(p.gender) {
        case MALE:
            printf("Gender: Male");
            break;

        case FEMALE:
            printf("Gender: Female");
            break;

        case OTHER:
            printf("Gender: Other");
            break;
    }

    return 0;
}
