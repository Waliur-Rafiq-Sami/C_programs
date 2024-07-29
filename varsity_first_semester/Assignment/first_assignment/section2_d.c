/**
 (d) In any n credit theory course of BAUST you have to  attend in  n CTs  and of them best n-1  CTs
will be counted. Now write a program that shows the average of best n-1 CTs marks out of n CTs.
Sample input:
Enter the value of n: 4
- 1st CT Marks: 15
- 2nd CT Marks: 10
- 3rd CT Marks: 15
- 4th CT Marks: 15
Sample Output:
    Average of best 3 CT marks: 15
 */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter CT number : ");
    scanf("%d", &n);

    float ct[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %dCT marks : ", i + 1);
        scanf("%f", &ct[i]);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter %dCT marks : %.2f ", i + 1, ct[i]);
    // }

    float minNumber = ct[0], allAvg = ct[0];
    for (int i = 1; i < n; i++)
    {
        allAvg += ct[i];
        if (minNumber > ct[i])
        {
            minNumber = ct[i];
        }
    }
    float Avg = ((allAvg - minNumber) / (n - 1));

    printf("Average of best %d CT marks: %.2f\n", n - 1, Avg);
    return 0;
}