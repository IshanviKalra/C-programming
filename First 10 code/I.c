#include <stdio.h>

int main() {
    int year, totalDays = 0;

    // Ask the user for the year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Count total days from year 1 to the previous year
    for (int i = 1; i < year; i++) {
        // Add 366 days for leap years, 365 otherwise
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            totalDays += 366;
        else
            totalDays += 365;
    }

    // Calculate the day of the week (0 = Sunday, 1 = Monday, ..., 6 = Saturday)
    int dayOfWeek = totalDays % 7;

    // List of day names starting from Sunday
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Show result
    printf("1st January %d is a %s.\n", year, days[dayOfWeek]);

    return 0;
}