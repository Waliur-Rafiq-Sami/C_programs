/*
(h) Write a  program that takes a  character as input and  prints  out one  of the following sentences as
appropriate:
    • Vowel in capital letter
    • Vowel in small letter
    • Consonant in capital letter
    • Consonant in small letter
    • Neither a vowel nor a consonant
 */

// 97 == a || 122 == z
// 65 == A || 90 == Z
// 57 == 9 || 48 == 0

#include <stdio.h>
void checkLetter(char ch)
{
    if (ch >= 65 && ch <= 90)
    {
        if (ch == 'A', ch == 'E', ch == 'I', ch == 'O', ch == 'U')
        {
            printf("Vowel in capital letter\n");
        }
        else
        {
            printf("Consonant in capital letter\n");
        }
    }
    else if (ch >= 97 && ch <= 122)
    {
        if (ch == 'a', ch == 'e', ch == 'i', ch == 'o', ch == 'u')
        {
            printf("Vowel in Small letter\n");
        }
        else
        {
            printf("Consonant in Small letter\n");
        }
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("%c it's a number\n", ch);
    }
    else
    {
        printf("Neither a vowel nor a consonant\n");
    }
}
int main()
{
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);
    checkLetter(ch);
    return 0;
}