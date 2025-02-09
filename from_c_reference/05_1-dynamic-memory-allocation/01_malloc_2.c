#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() { 
    char *str =  (char *) malloc(100 * sizeof(char));
    strcpy(str, "Hello, world!");
 
    printf("%s\n", str);
    free(str);
 
    return 0;
}