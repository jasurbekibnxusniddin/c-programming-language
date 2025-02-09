#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nechta butun son kiritmoqchisiz? ");
    scanf("%d", &n);

    // Dinamik xotira ajratish
    int *arr = (int *)malloc(n * sizeof(int));

    // Xotira ajratilganini tekshirish
    if (arr == NULL) {
        printf("Xotira ajratishda xatolik yuz berdi!\n");
        return 1; // Dasturdan chiqish
    }

    // Foydalanuvchidan sonlarni kiritishni so'rash
    printf("%d ta son kiriting:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Kiritilgan sonlarni ekranga chiqarish
    printf("Kiritilgan sonlar:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Dinamik xotirani bo'shatish
    free(arr);

    return 0;
}
