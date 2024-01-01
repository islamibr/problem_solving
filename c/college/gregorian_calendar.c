#include <stdio.h>

int main() {
    // variables
    int year, month, numDays, startDay, i, dayCounter;
    const char* monthNames[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const char* dayNames[] = {"Sa", "Su", "Mo", "Tu", "We", "Th", "Fr"};

    // Prompt the user for the year and month
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    // Calculate the number of days in the month
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) numDays = 29;
        else numDays = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) numDays = 30;
    else numDays = 31;

    // Calculate the day of the week on which the month starts (Zeller's congruence formula)
    int y = year;
    int m = month;
    if (m < 3) {
        m += 12;
        y--;
    }
    int k = y % 100;
    int j = y / 100;
    startDay = (1 + 13 * (m + 1) / 5 + k + k / 4 + 5 * j + j / 4) % 7;

    // Print the month and year heading
    printf("\n\t%s %d\n", monthNames[month-1], year);
    printf("--------------------------\n");

    // Print the day names header
    for (i = 0; i < 7; i++) {
        printf("%s  ", dayNames[i]);
    }
    printf("\n");

    // Print the calendar
    for (i = 0; i < startDay; i++) {
        printf("    ");
    }

    for (i = 1, dayCounter = startDay; i <= numDays; i++, dayCounter = (dayCounter + 1) % 7) {
        printf("%2d  ", i);
        if (dayCounter == 6) {
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
