#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int *arr = (int *) malloc(5 * sizeof(int));

    srand(time(NULL));

    for (int i = 0; i < 5; i++) {
        arr[i] = rand() % 100;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    arr = realloc(arr, 10 * sizeof(int));

    for (int i = 0; i < 10; i++) {
       printf("%d ", arr[i]);
    }

    for (int i = 5; i < 10; i++) {
        arr[i] = rand() % 100;
    }

    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}