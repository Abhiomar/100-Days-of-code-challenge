//Q8:Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>
int main() {
    int n;
    int sum=0;
    printf("Enter the number n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++) {
        sum+=i;
    }
    printf("The sum of %d number is %d\n",n,sum);

    return 0;
}
