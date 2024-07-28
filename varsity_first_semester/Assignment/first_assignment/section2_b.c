// (b) Write a simple C program to sort three numbers in ascending order using if - else statements
#include <stdio.h>
void swapTheThreeNumberInAscendingOrder(int a[3]);
int x[3];

void swapTheThreeNumberInAscendingOrder(int a[3])
{
    if (a[0] < a[1] && a[0] < a[2])
    {
        if (a[1] < a[2])
        {
            // printf("%d %d %d \n", a[0], a[1], a[2]);
            x[0] = a[0];
            x[1] = a[1];
            x[2] = a[2];
        }
        else
        {
            // printf("%d %d %d \n", a[0], a[2], a[1]);
            x[0] = a[0];
            x[1] = a[2];
            x[2] = a[1];
        }
    }
    else if (a[1] < a[0] && a[1] < a[2])
    {
        if (a[0] < a[2])
        {
            // printf("%d %d %d \n", a[1], a[0], a[2]);
            x[0] = a[1];
            x[1] = a[0];
            x[2] = a[2];
        }
        else
        {
            // printf("%d %d %d \n", a[1], a[2], a[0]);
            x[0] = a[1];
            x[1] = a[2];
            x[2] = a[0];
        }
    }
    else
    {
        if (a[0] < a[1])
        {
            printf("%d %d %d \n", a[2], a[0], a[1]);
            x[0] = a[2];
            x[1] = a[0];
            x[2] = a[1];
        }
        else
        {
            printf("%d %d %d \n", a[2], a[1], a[0]);
            x[0] = a[2];
            x[1] = a[1];
            x[2] = a[0];
        }
    }
}

int main()
{
    int a[3];
    printf("Enter there integer Number : \n");

    for (int i = 0; i < 3; i++)
    {
        printf("%c = ", i + 97);
        scanf("%d", &a[i]);
    }

    swapTheThreeNumberInAscendingOrder(a);
    printf("Sort three numbers in ascending order is : %d %d %d\n", x[0], x[1], x[2]);

    return 0;
}