#include <stdio.h>
#include <time.h>

int main() {
    time_t current_time;
    struct tm *time_info;

    // Get the current time from the system
    time(&current_time);

    // Convert time to struct tm format
    time_info = localtime(&current_time);

    // Get the current year
    int thisYear = time_info->tm_year + 1900;  // tm_year starts from 1900
    int age;

    printf("enter your age: ");
    scanf("%d", &age);

    printf("your birth year: %d\n", thisYear - age);

    return 0;
}
