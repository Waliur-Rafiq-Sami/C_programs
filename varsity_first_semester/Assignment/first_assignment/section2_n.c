/**
 (n)  Write  an  appropriate  control  structure  that  will  examine  the  value  of  a  floating-point  variable
    called temp and print one of the following messages, depending on the value assigned to temp.

    i. ICE, if the value of temp is less than 0.
    ii. WATER, if the value of temp lies between 0and 100.
    iii. STEAM, if the value of temp exceeds 100.

    Can a switch statement be used in this instance?
   */

#include <stdio.h>
#include <string.h>

void checkCondition(float n, char *r)
{
    if (n < 0)
    {
        strcpy(r, "ICE");
    }
    else if (n >= 0 && n <= 100)
    {
        strcpy(r, "Water");
    }
    else
    {
        strcpy(r, "STEAM");
    }
}

int main()
{
    float temp;
    printf("Enter a Number : ");
    scanf("%f", &temp);
    char results[10];
    checkCondition(temp, results);
    printf("%s\n", results);
    return 0;
}