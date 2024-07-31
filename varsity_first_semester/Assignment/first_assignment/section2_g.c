/**
(g) Consider the following scenarios, you are given two baskets, one basket is labelled as 10 number
    and  another one is labelled as 20 number. In label 10  basket,  there is a  ball which  is labelled as
    number 20, and in another basket, label 10 number ball is present. Now, your task is to keep those
    two balls in those two baskets so that the baskets and balls label number match.

    i) Write a C program for your assigned task.
    ii) Write an alternative C program for this assigned task.
 */
#include <stdio.h>
void swap(int *a, int *b)
{
    int x = *a;
    *a = *b;
    *b = x;
}
int main()
{
    int basket20 = 10;
    int basket10 = 20;
    swap(&basket20, &basket10);
    printf("basket10 = %d \n", basket10);
    printf("basket20 = %d \n", basket20);
    return 0;
}