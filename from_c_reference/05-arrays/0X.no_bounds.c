#include <stdio.h>

int main() {
    int array[10];
    
    for(int i = 0; i < 15; i++) {
        array[i] = i;
    }

    for(int i = 0; i < 15; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

