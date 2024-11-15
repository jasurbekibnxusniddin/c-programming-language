#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *p;

    void *any = malloc(10);

    if (!any /*or: p == NULL */) {
        printf("Memory allocation failed\n");
    } else {
        printf("Memory allocated at address %p\n", p);
        p = any;
    }

    strcpy(p, "Hello World!");
    printf("String: %s\n", p);

    free(p);

    return 0;
}