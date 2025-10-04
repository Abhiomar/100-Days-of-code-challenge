//Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
//First 100 units at ₹5/unit 
//Next 100 units at ₹7/unit 
//Next 100 units at ₹10/unit 
//Above at ₹12/unit

#include <stdio.h>

int main()
{
    int units;
    int bill;

    printf("Enter the units consumed: ");
    scanf("%d", &units);

    if (units > 0 && units <= 50)
    {
        bill = (units * 5);
    }
    else if (units >50 && units <= 150)
    {
        bill = (50*5) + (units - 50) * 7;
    }
    else if (units > 150 && units <= 250)
    {
        bill = (50 * 5) + (100 * 7) + (units - 150) * 12;
    }
    if (units == 250)
    {
        bill += 50;
    }
    printf("Bill: %d Rupees", bill);
    return 0;
}
