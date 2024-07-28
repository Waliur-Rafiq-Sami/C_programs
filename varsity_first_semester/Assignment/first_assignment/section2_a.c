// (a) Write a simple C program to find the largest number among three using if - else statements
#include <stdio.h>
// int findLargeNumberAmongThree(int a[3]);

int findLargeNumberAmongThree(int a[3])
{
    if (a[0] > a[1] && a[0] > a[2])
    {
        return a[0];
        // printf("%d is the large Number.\n", a[0]);
    }
    else if (a[1] > a[0] && a[1] > a[2])
    {
        return a[1];
        // printf("%d is the large Number.\n", a[1]);
    }
    else
    {
        return a[2];
        // printf("%d is the large Number.\n", a[2]);
    }
    return 0;
}

int main()
{
    // int a, b, c;
    int a[3];
    printf("Enter there integer Number : \n");
    // printf("a = ");
    // scanf("%d", &a);
    // printf("b = ");
    // scanf("%d", &b);
    // printf("c = ");
    // scanf("%d", &c);
    for (int i = 0; i < 3; i++)
    {
        printf("%c = ", i + 97);
        scanf("%d", &a[i]);
    }
    printf("%d is the large Number.\n", findLargeNumberAmongThree(a));
    // findLargeNumberAmongThree(a);
    return 0;
}