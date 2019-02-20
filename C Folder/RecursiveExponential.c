#include<stdio.h>

int recExp(int, int);

int main()
{
    int base, exponent;

    printf("Enter the base number:\n");
    scanf("%d",&base);

    printf("Enter the exponent number:\n");
    scanf("%d",&exponent);

    printf("%d is result",recExp(base, exponent));
}

int recExp(int base, int exponent)
{
    if(exponent==1)
    {
        return base;
    } else
    {
        return base*recExp(base, (exponent-1));
    }
}
