/**
@author Cahid

Nested looplar ile alakalý çalýþma..
*/

#include <stdio.h>

void exampleLoop();

int main()
{
   // exampleLoop();
   // exampleLoop2();
   exampleLoop3();
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

void exampleLoop3 ()
{
    int space, star, newLine;
    for(newLine=1; newLine<5; newLine++)
    {
        for(star=0; star<newLine; star++)
        {
            for(space=5; space>newLine>star ; space--)
            {
                printf(" ");
            }
           printf("*");
        }
     printf("\n");
    }

}

void exampleLoop3_saidSol()

{


}
