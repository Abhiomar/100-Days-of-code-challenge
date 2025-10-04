//Q23: Write a program to calculate library fine based on late days as follows: 
//First 5 days late: ₹2/day 
//Next 5 days late: ₹4/day 
//Next 20 days days late: ₹6/day 
//More than 30 days: Membership Cancelled.

#include <stdio.h>

int main()
{
    int n, fine;

    printf("Enter late days of book deposit: ");
    scanf("%d", &n);

    if (n>0 && n<=5)
    {
        fine = n * 2;
        printf("Fine = %d Rupees", fine);
    }
    else if (n >= 6 && n <=10)
    {
        fine = n * 4;
        printf("Fine = %d Rupees", fine);
    }
    else if (n >= 11 && n <= 30)
    {
        fine = n * 6;
        printf("Fine = %d Rupees", fine);
    }
    else if (n > 30)
    {
        printf("Membership Cancelled");
    }
    return 0;
}
