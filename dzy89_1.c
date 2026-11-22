//Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Numbers {
    ONE = 10,
    TWO = 20,
    THREE = 30
};

int main() {
    enum Numbers num;

    num = ONE;
    printf("ONE = %d\n", num);

    num = TWO;
    printf("TWO = %d\n", num);

    num = THREE;
    printf("THREE = %d\n", num);

    return 0;
}
