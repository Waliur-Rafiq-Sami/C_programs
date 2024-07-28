/*
(c)  Let BAUST admission test is subjected to the following conditions :
     i. Marks in Mathematics >= 60
     ii. Marks in Physics >=50
     iii. Marks in Chemistry >=40
     iv. Total marks in all three subjects >= 200 or Total in Mathematics and Physics >= 150 Given  the  marks  in  three  subjects,
      write  a  program  to  process  the  application  to  check  the  eligible candidates
*/

#include <stdio.h>
#include <stdbool.h>

bool verifyEligibleCandidates(float mark[3]);
int x[3];

bool verifyEligibleCandidates(float mark[3])
{
    if (mark[0] >= 60 && mark[1] >= 50 && mark[2] >= 40 && (mark[0] + mark[1] + mark[2] >= 200 || mark[0] + mark[1] >= 150))
    {
        return true;
    }
    return false;
}

int main()
{
    float mark[3];
    printf("Enter your Mathematics Mark : ");
    scanf("%f", &mark[0]);
    printf("Enter your Mathematics Mark : ");
    scanf("%f", &mark[1]);
    printf("Enter your Mathematics Mark : ");
    scanf("%f", &mark[2]);

    bool student = verifyEligibleCandidates(mark);
    if (student)
    {
        printf("Eligible\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
    return 0;
}