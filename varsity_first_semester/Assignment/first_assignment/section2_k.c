/*
(k) A  palindromic  number  (also  known  as  a  numeral  palindrome  or  a  numeric  palindrome)  is  a
number (such as 16461) that remains the same when its digits are reversed. In other words, it has
relational symmetry across a vertical axis. Now, write a C program to check whether a number is
palindrome or not.
*/

#include <stdio.h>
int reverse(int *num)
{
    int n = *num;
    int NewNum = 0;
    while (n != 0)
    {
        int lastNumber = n % 10;
        NewNum = NewNum * 10 + lastNumber;
        n /= 10;
    }
    return NewNum;
}
int main()
{
    int number;
    printf("Enter Number : ");
    scanf("%d", &number);
    int newNumber = reverse(&number);
    number == newNumber ? printf("%d is Palindrome Number\n", number) : printf("%d is not a Palindrome Number\n", number);
    return 0;
}