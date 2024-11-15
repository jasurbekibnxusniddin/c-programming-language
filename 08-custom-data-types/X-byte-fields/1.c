#include <stdio.h>

// Byte fields

struct my_struct {
    char a;
    unsigned char b;
    short c;
    unsigned short d;
    int e;
    unsigned int f;
    long g;
    unsigned long h;
    long long i;
    unsigned long long j;
};

int main() {
    struct my_struct s = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printf("%d %d %d %d %d %d %d %d %d %d\n", s.a, s.b, s.c, s.d, s.e, s.f, s.g, s.h, s.i, s.j);
    return 0;
}