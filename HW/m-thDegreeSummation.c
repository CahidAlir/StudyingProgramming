#include<stdio.h>
#include<stdlib.h>

int recursiveRepeat(int, int);//This will take the total, assign it as new end point and repeat the operation.
int recursiveAddition(int);//This will calculate the total of numbers from 1 to end point which given by user.

int iterativeRepeat(int, int);//This will take the total, assign it as new end point and repeat the operation.
int iterativeAddition(int);//This will calculate the total of numbers from 1 to end point which given by user.

int main()
{
    int endPoint, repeatCount;

    printf("Enter the end value:\n");
    scanf("%d",&endPoint);

    printf("Enter the repeat count:\n");
    scanf("%d",&repeatCount);

    while(endPoint<=0 || repeatCount<=0)
    {
        printf("Invalid values!");

        printf("Enter the end value:\n");
        scanf("%d",&endPoint);

        printf("Enter the repeat count:\n");
        scanf("%d",&repeatCount);
    }
    printf("%d is sum(%d,%d)(recursive)\n",recursiveRepeat(endPoint,repeatCount),endPoint,repeatCount);

    printf("%d is sum(%d,%d)(iterative)\n",iterativeRepeat(endPoint,repeatCount) ,endPoint,repeatCount);

    return 0;
}

/**
This function is taking the variables from main function and repeats addition due to repeatCount.
*/

int recursiveRepeat(int endPoint, int repeatCount)
{
    if(repeatCount==1)
    {   //If its the last time operation will repeat function returns directly without repeating itself.
        return recursiveAddition(endPoint);
    }
    endPoint=recursiveAddition(endPoint);
        //Here, function assigns the sum of numbers from 1 to end point as new end point.
    return recursiveRepeat(endPoint, repeatCount-1);
        /**With this operation function repeats itself
        but its decreasing repeat count so it can stop repeating in some point.*/
}

/**
This function is gathering numbers from 1 to a given end point.
*/

int recursiveAddition(int endPoint)
{
    if(endPoint==1)//Basically function is adding end point to what is coming before it until it is 1
    {
        return 1;
    }
    return endPoint + recursiveAddition(endPoint-1);
}

int iterativeRepeat(int endPoint, int repeatCount)
{
    int counter, newEndPoint;
    int sum=0;

    for(counter=0;counter<repeatCount;counter++)
    {
        newEndPoint=iterativeAddition(endPoint);
        endPoint=newEndPoint;
        sum = sum + newEndPoint;
    }
    return sum;
}

int iterativeAddition(int endPoint)
{
    int counter, sum=0;

    for(counter=1;counter<=endPoint;counter++)
    {
        sum+=counter;
    }
    return sum;
}
