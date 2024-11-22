/*
  Roll No.:25
  Student Name:MOHD AAMIN PATHAN
  Program Title:TO DETERMINE LEAP YEAR OR NOT

  Task Given By:AYAN SAYYED
    - Roll No. of Assignee:29
    - Assignee Name:AYAN SAYYED
*/

#include <stdio.h>

int main() {
    int year;

    // Input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year check
    if ((year % 4 == 0 ,year % 100 != 0)
    || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}