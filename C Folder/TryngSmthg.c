#include<stdio.h>

int recursiveSum(int);
void iterSum(int);

int main()
{
    int i, sum;

    printf("Enter a number:\n");
    scanf("%d",&i);

    sum=recursiveSum(i);
    printf("Sum is %d\n(recur)\n",sum);

    iterSum(i);

    return 0;
}

int recursiveSum(int i)
{
    if(i/10==0)
    {
        return i%10;
    }
    return i%10+recursiveSum(i/10);
}

void iterSum(int i)
{
    int sum=0;

    while(i!=0)
    {
        sum=sum + i%10;
        i=i/10;
    }
    printf("Sum is %d\n(iter)\n",sum);
}
