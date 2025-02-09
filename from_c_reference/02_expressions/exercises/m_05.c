#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    // Taking input from the user using one scanf function
    printf("Enter hours, minutes, and seconds (separated by spaces): ");
    scanf("%d %d %d", &hours, &minutes, &seconds);

    // Displaying the time in hours:minutes:seconds format
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}