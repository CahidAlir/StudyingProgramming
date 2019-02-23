/**
Author: @Cahid
Generate to arrays as p[50] and q[100] and assign first 50 elements of p
to first 50 elements of q.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int p[50], q[100], i;

    srand(time(NULL));

    for(i=0;i<50;i++)
    {
        p[i]=1+rand()%100;
    }

    for(i=0;i<100;i++)
    {
        q[i]=1+rand()%100;
    }

    for(i=0;i<50;i++)
    {
        q[i]=p[i];
    }
}
