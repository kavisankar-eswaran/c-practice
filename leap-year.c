#include <stdio.h>
#include <conio.h>

void main()
{
    // Get input
    int year;
    printf("Enter the year: ");
    scanf("&d", &year);

    // Check leap year
    if(year%100==0) {
        if(year%400==0){
            printf("It's a leap year");
        }
        else {
            printf("Not a leap year");
        }
    }
    else {
        if(year%4==0){
            printf("It's a leap year");
        }
        else {
            printf("Not a leap year");
        }
    }
    getch();
}
