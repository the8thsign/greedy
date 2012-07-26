/*
* CS50 / pset1 / greedy
* Alec Peden (alec.peden@gmail.com)
*/

#include <cs50.h>
#include <stdio.h>
#include <math.h>


int
main(void)
{
    // get input from user
    printf("How much change is owed?\n");
    float change = GetFloat();


    int moneys = (int) round(change * 100);

    // initialize some variables
    int coins = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennys = 0;
    

    // nested do inside of do-while loop to calculate
    // coin usage.
    do
    {
        while (moneys >= 25)
        {
            moneys = moneys - 25;
            coins++;
            quarters++;
        }
    // dimes
        while (moneys >= 10)
        {
            moneys = moneys - 10;
            coins++;
            dimes++;
        }
    // nickels
        while (moneys >= 5)
        {
            moneys = moneys - 5;
            coins++;
            nickels++;
        }
    // Pennies
        while (moneys >= 1)
        {
            moneys = moneys - 1;
            coins++;
            pennys++;
        }
    } 
    while (moneys > 0);
    // Output results
    printf("\nYour change will be in the form of:\n%d quarters\n%d dimes\n%d nickels\n%d pennies\n", quarters, dimes, nickels, pennys);
    printf("Here's how many coins I gave you: %d\n", coins);
    int dollars = quarters / 4;
    int rem_d = quarters % 4;
    printf("\nIf i could have used dollars you would have received:\n%d dollars\n%d quarters\n%d dimes\n%d nickels\n%d pennies.\n", dollars, rem_d, dimes, nickels, pennys);
}