//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Days {
    SUNDAY = 5,
    MONDAY = 10,
    TUESDAY = 15
};

int main() {
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);

    return 0;
}
