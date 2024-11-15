#include <stdio.h>

struct car {
    char name[50];
    int year;
    float price;
} car1, car2;


void printCarInfo (struct car car) {
    printf("Name: %s\n", car.name);
    printf("Year: %d\n", car.year);
    printf("Price: %.2f\n", car.price);
}

int main() {

//     printf("Enter car name: ");
//     scanf("%s", car1.name);

//     printf("Enter car year: ");
//     scanf("%d", &car1.year);

//     printf("Enter car price: ");
//     scanf("%f", &car1.price);

//     car1.price = car1.price * 1.1;
//     car1.year = car1.year + 1;

//     printf("Name: %s\n", car1.name);
//     printf("Year: %d\n", car1.year);
//     printf("Price: %.2f\n", car1.price);

//     struct car car3;
//     car3 = car1;

//     printCarInfo(car1);
//     printCarInfo(car2);
//     printCarInfo(car3);

     struct car carx = { "BMW", 2022, 100000.00};// {
    //     .name = "BMW",
    //     .year = 2022,
    //     .price = 100000.00
    // };

    printCarInfo(carx);

    return 0;
}