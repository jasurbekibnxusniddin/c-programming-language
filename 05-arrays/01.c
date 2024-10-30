#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    printf("%d", arr[0]);

    char arr2[5] = {'a', 'b', 'c', 'd', 'e'};
    
    arr2[3] = 'f';
    printf("%s\n", arr2);

    char arr3[] = "salom";
    
    arr3[0] = 'S';

    printf("%s\n", arr3);

    return 0;
}