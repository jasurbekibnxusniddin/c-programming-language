#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // open a filr for reading
    FILE *file = fopen("test.txt", "a+");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    putc('a', file);

    // read the contents of the file
    char buffer[1024];
    fgets(buffer, sizeof(buffer), file);

    // print the contents of the file
    printf("%s\n", buffer);

    // close the file
    fclose(file);

    return 0;
}