#include <stdio.h>

int main() {
    int a = 10;

    {
        int a = 20;
        printf("%d\n", a);
    }
    
    printf("%d\n", a);
    return 0;
}