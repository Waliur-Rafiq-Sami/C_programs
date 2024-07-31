/*
(i)  Leap years are years where an extra day is added to the end of the shortest month, February. This
so-called intercalary day, February 29, is commonly referred to as leap day. Leap years have 366
days instead of the usual 365 days and occur almost every four years.
  A leap year is exactly divisible by 4 except for century years (years ending with 00). The century
  year is a leap year only if it is perfectly divisible by 400.For example,
     1999 is not a leap year
     2000 is a leap year
     2004 is a leap year
Now, write a C Program to check whether the year entered by the user is a leap year or not.
*/

#include <stdio.h>
int isLeapYear(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int year;
    printf("Enter Year : ");
    scanf("%d", &year);

    isLeapYear(year) ? printf("%d is a leap year \n", year) : printf("%d is not a Leap Year", year);

    return 0;
}