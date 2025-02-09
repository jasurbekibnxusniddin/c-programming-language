#include <stdio.h>

int main(void) {
    int x = 10;
    int *ptr = &x;
    
    printf("%d\n", *ptr);
    
    return 0;
}