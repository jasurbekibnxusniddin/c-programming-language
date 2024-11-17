#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1 = (int *)malloc(5 * sizeof(int));
    int *arr2 = (int *)calloc(5, sizeof(int));

    printf("malloc bilan ajratilgan xotira: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]); // Noaniq qiymatlar ko'rinishi mumkin
    }

    printf("\n\ncalloc bilan ajratilgan xotira: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]); // Har doim 0 ko'rsatiladi
    }

    free(arr1);
    free(arr2);

    return 0;
}
