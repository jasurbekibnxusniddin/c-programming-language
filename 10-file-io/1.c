#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // open a filr for reading
    FILE *file = fopen("./10-file-io/test.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // read the contents of the file
    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // close the file
    fclose(file);
    return 0;
}