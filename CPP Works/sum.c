#include<stdio.h>
int main()
{
    int q, r, divisor, divident;
    printf("Enter the value of Divident:\n");
    scanf("%d",&divident);
    printf("Enter the value of Divisor: \n");
    scanf("%d",&divisor);
    printf("Remainder = %d and Quotient = %d",divident%divisor,divident/divisor);
    return 0;
}