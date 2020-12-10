// A00201671_Rowe_Assign01.c : This file contains the 'main' function. Program execution begins and ends there.
// Cameron  Rowe, BCIT A00201671
// Comp 2511
// Sep 21, 2020

# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

double gallons;         // should these be floats or doubles? floats handle precision to 0.000010 degree
double miles;
double totalGallons = 0.00;
double totalMiles = 0.00;

int main()
{
    while (1) {
        printf("Enter the gallons used ( -1.0 to end): ");      // change format string to %f from lf if using floats
        scanf("%lf", &gallons);
        if (gallons == -1.00) {
            break;
        }
        while (gallons <= 0.00) {
            printf("You have entered an invalid value for gallons, try again: ");
            scanf("%lf", &gallons);
        }

        totalGallons += gallons;

        printf("Enter the miles driven: ");
        scanf("%lf", &miles);

        while (miles <= 0.00) {
            printf("You have entered an invalid value for miles, try again: ");
            scanf("%lf", &miles);
        }

        totalMiles += miles;
        printf("The miles / gallon for this tank was %lf\n\n", (miles / gallons));
    }

    if (isnan(totalMiles / totalGallons)) {

        printf("\nThe overall average miles could not be computed ;-(");
    }
    else {
        printf("\nThe overall average miles/gallon was %lf", (totalMiles / totalGallons));
    }

    printf("\n\nThat's all folks - press any key to exit");

    _getch();
    return 0;
}
