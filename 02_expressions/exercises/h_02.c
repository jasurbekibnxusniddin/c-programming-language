#include <stdio.h>

int main() {
    float temperature;
    char unit;
    float converted_temperature;
    char converted_unit;

    // Ask the user to input the temperature and its unit (C for Celsius, F for Fahrenheit)
    printf("Enter the temperature followed by C (Celsius) or F (Fahrenheit): ");
    scanf("%f %c", &temperature, &unit);

    // Conversion logic
    // Celsius to Fahrenheit: (C * 9/5) + 32
    // Fahrenheit to Celsius: (F - 32) * 5/9

    // Formula-based conversion without conditional statements
    converted_temperature = (unit == 'C' || unit == 'c') ? (temperature * 9.0 / 5.0) + 32.0 : (temperature - 32.0) * 5.0 / 9.0;
    
    // Determine the unit for the converted temperature
    converted_unit = (unit == 'C' || unit == 'c') ? 'F' : 'C';

    // Output the result
    printf("%.2f %c is %.2f %c\n", temperature, unit, converted_temperature, converted_unit);

    return 0;
}
