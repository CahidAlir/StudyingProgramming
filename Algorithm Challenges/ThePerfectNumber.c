#include<stdio.h>

int divisorAddition(int);
void checkPerfect(int, int);

int main()
{
    int number, sumOfDivisors;

    printf("Enter the number:");
    scanf("%d",&number);
    if(number>0)
    {
        sumOfDivisors=divisorAddition(number);
        checkPerfect(number, sumOfDivisors);
    }
    return 0;
}

int divisorAddition(int number)
{
    int divisor, sumOfDivisors=0;

    for(divisor=1;divisor<number;divisor++)
    {
        if(number%divisor==0)
        {
            sumOfDivisors+=divisor;
        }
    }
    return sumOfDivisors;
}

void checkPerfect(int number, int sumOfDivisors)
{
    if(number==sumOfDivisors)
    {
        printf("Its a perfect number");
    } else {
        printf("Its not a perfect number");
    }
}
