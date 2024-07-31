/**
 * (f)  Write  a  program in C that will ask the  user to enter the  total shopping amount purchased in  the
shop  and  then  apply  the  discount  as  per  the  following  discount  criteria,  then  find  and  print  the
final amount that has to be paid by the customer after subtracting the discount amount:
     If  the  user  has  purchased  something  that  costs  from  $101  to  $200,  the  discount  will  be
        5%.
     If  the  user  has  purchased  something  that  costs  from  $201  to  $400,  the  discount  will  be
        10%.
     If  the  user  has  purchased  something  that  costs  from  $401  to  $800,  the  discount  will  be
        20%.
     And if the user has purchased something that costs more than $800, the total discount that
        will be applied to the whole purchase amount is 25%.
 */

#include <stdio.h>
float discount(float money)
{
    if (money <= 100)
    {
        return 0;
    }
    else if (money > 100 && money <= 200)
    {
        return ((5.0 * money) / 100.0);
    }
    else if (money > 200 && money <= 400)
    {
        return ((10.0 * money) / 100.0);
    }
    else if (money > 400 && money <= 800)
    {
        return ((20.0 * money) / 100.0);
    }
    else
    {
        return ((25.0 * money) / 100.0);
    }
}

int main()
{
    float shoppingAmount;
    printf("Enter Total Shopping Amount : ");
    scanf("%f", &shoppingAmount);
    printf("Customer need to pray : %.2f\n", (shoppingAmount - discount(shoppingAmount)));
    return 0;
}