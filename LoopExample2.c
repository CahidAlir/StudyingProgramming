/**
@author Cahid

Nested looplar ile alakalý çalýþma..
*/

#include <stdio.h>

void exampleLoop();

int main()
{
   // exampleLoop();
    exampleLoop2();
    return 0;
}

void exampleLoop()
{
    int i, j;
    for(i=1; i<6; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void exampleLoop2 ()
{
    int i, j;
    for(i=6; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
           printf("*") ;
        }
        printf("\n");
    }
}


