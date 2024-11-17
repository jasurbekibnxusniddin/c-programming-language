#include <stdio.h>

int main() {
    char ch1;
    char ch2;

    ch1 = getchar();
    while ((getchar()) != '\n');    
    
    ch2 = getchar();

    printf("%c\n", ch1);
    printf("%c\n", ch2);
}