/**
 *  We know, there is a rule for valid triangle and there are various types of triangles in terms of their
angle and sides’ length. Now observe some of the following triangle shapes.

i. Present a C program to check whether a triangle is valid or not if sides are given.
    1.a + b > c
    2.a + c > b
    3.b + c > a
        Input :  a = 7, b = 10, c = 5
    Output : Valid

    Input : a = 1 b = 10 c = 12
    Output : Invalid

ii. Compile a C program to check whether a triangle is equilateral, scalene or isosceles.
    Step 1: Declare three sides of triangle.
    Step 2: Enter three sides at run time.
    Step 3: If side1 == side2 && side2 == side3
    Go to step 6
    Step 4: If side1 == side2 || side2 == side3 || side3 == side1
    Go to Step 7
    Step 5: Else
    Go to step 8
    Step 6: Print the triangle is equilateral.
    Step 7: Print the triangle is isosceles.
    Step 8: Print the triangle is scalene.
 */

#include <stdio.h>
#include <string.h>
// Ans the question on i.
int check(int siz[3])
{
    if (siz[0] + siz[1] > siz[2] && siz[0] + siz[2] > siz[1] && siz[1] + siz[2] > siz[0])
    {
        return 1;
    }
    else
        return 0;
}
// Ans the question on ii.
void checkTriangle(int siz[3], char *results)
{
    if (siz[0] == siz[1] && siz[1] == siz[2])
    {
        strcpy(results, "equilateral");
    }
    else if (siz[0] == siz[1] || siz[0] == siz[2] || siz[1] == siz[2])
    {
        strcpy(results, "isosceles");
    }
    else
    {
        strcpy(results, "scalene");
    }
}
int main()
{
    char results[15];
    int siz[3];
    printf("Enter triangle size : \n");

    for (int i = 0; i < 3; i++)
    {
        printf("%c = ", i + 97);
        scanf("%d", &siz[i]);
    }

    if (check(siz))
    {
        checkTriangle(siz, results);
        printf("This triangle is valid and type is %s\n", results);
    }
    else
    {
        printf("inValid\n");
    }

    return 0;
}
