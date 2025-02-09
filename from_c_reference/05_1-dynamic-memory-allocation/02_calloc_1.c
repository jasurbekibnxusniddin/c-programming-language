#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n = 5;

    int *ptr = (int *) calloc(n, sizeof(int));
    if(ptr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", ptr+i);
    }

    for (int i = 0; i < n; i++) {
        printf("%d, ", ptr[i]);
    }

    free(ptr);
    return 0;
}