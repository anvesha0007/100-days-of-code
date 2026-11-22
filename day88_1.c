//Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    int i;

    char *names[] = {"ADMIN", "USER", "GUEST"};

    for(i = 1; i <= 3; i++) {
        printf("%s = %d\n", names[i - 1], i);
    }

    return 0;
}
