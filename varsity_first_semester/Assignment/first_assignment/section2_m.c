/*
(m) Write  a  switch  statement  that  will  examine  the  value  of  a  char-type  variable  called  color  and
print one of the following messages, depending on the character assigned to color.
    i. RED, if either r or R is assigned to color,
    ii. GREEN, if either g or G is assigned to color,
    iii. BLUE, if either b or B is assigned to color,
    iv. BLACK, if color is assigned any other character.
*/

#include <stdio.h>
#include <string.h>
void isColor(char ch, char *res)
{
    switch (ch)
    {
    case 'R':
    case 'r':
        strcpy(res, "RED");
        break;
    case 'G':
    case 'g':
        strcpy(res, "GREEN");
        break;
    case 'B':
    case 'b':
        strcpy(res, "BLUE");
        break;
    default:
        strcpy(res, "BLACK");
        break;
    }
}

int main()
{
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);
    char results[10];
    isColor(ch, results);
    printf("%s\n", results);
    return 0;
}