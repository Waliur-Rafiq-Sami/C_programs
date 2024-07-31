/*
(j)  Write a simple C program to reverse an integer.
    Sample input: 123
    Sample Output: 321
*/

#include <stdio.h>
void reverse(int *num)
{
    int n = *num;
    *num = 0;
    while (n != 0)
    {
        int lastNumber = n % 10;
        *num = *num * 10 + lastNumber;
        n /= 10;
    }
}
int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);
    reverse(&number);
    printf("The reverse Number is : %d\n", number);
    return 0;
}