#include <stdio.h>

union my_union {
    int a;
    int b;
};

int main() {
    union my_union u;

    u.a = 10;
    u.b = 20;

    printf("a: %d\n", u.a);
    printf("b: %d\n", u.b);

    return 0;
}