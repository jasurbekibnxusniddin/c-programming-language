#include <stdio.h>
#include <stdlib.h>

// Function to append an element to an array
int* append(int* arr, int* size, int value) {
    (*size)++;

    int* new_arr = (int*)realloc(arr, (*size) * sizeof(int));
    if (new_arr == NULL) {
        printf("Memory reallocation failed!\n");
        exit(1);
    }

    new_arr[(*size) - 1] = value;

    return new_arr;
}

int main() {
    int size = 3;
    int* arr = (int*)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    printf("Initial array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr = append(arr, &size, 4);

    printf("Array after appending: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>

void append(int **arr, int *length, int value) {
    // Increase the length by 1
    (*length)++;

    // Reallocate memory
    int *new_arr = (int *)realloc(*arr, (*length) * sizeof(int));
    if (new_arr == NULL) {
        printf("Memory allocation failed");
        return;
    }

    // Assign the reallocated memory back to the array pointer
    *arr = new_arr;

    // Append the new value
    (*arr)[(*length) - 1] = value;
}

int main() {
    int length = 5;
    int *arr = (int *)malloc(length * sizeof(int));

    // Check for memory allocation failure
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initialize the array
    for (int i = 0; i < length; i++) {
        arr[i] = i + 1;
    }

    int value = 6;

    // Call the append function
    append(&arr, &length, value);

    // Print the array after appending
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

 */