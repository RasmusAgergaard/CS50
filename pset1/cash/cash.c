/****************************************************************************
*                                                                           *
*   Rasmus Agergaard                                                        *
*                                                                           *
*   CS50 - Pset1 - Cash                                                     *
*                                                                           *
*   Calculates the minimum number of coins required to give a user change   *
*                                                                           *
****************************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //Init
    float changeD;
    int changeC;
    int numberOfCoins = 0;

    //Promt user for change owed, and make sure it is a positive number
    do
    {
        changeD = get_float("Change owed: ");
    }
    while (changeD < 0);

    //Convert - We not have the amount in cents
    changeD = changeD * 100;
    changeD = ceilf(changeD * 100) / 100;
    changeC = (int)changeD;

    //25
    while ((changeC / 25) >= 1)
    {
        changeC = changeC - 25;
        numberOfCoins++;
    }

    //10
    while ((changeC / 10) >= 1)
    {
        changeC = changeC - 10;
        numberOfCoins++;
    }

    //5
    while ((changeC / 5) >= 1)
    {
        changeC = changeC - 5;
        numberOfCoins++;
    }

    //1
    while ((changeC / 1) >= 1)
    {
        changeC = changeC - 1;
        numberOfCoins++;
    }

    //printf("%i\n",changeC);
    printf("%i\n", numberOfCoins);
}