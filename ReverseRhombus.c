#include <stdio.h>

void printShape();

int main()
{
    printShape();
    return 0;
}

void printShape()
{
    int nLine, star, space;
    for(nLine=0; nLine<=5; nLine++)
    {
        for(space=0; space<nLine; space++)
        {
            printf(" ");
        }
        for(star=9; star>=nLine*2-1; star--)
        {
          printf("*");
        }
        printf("\n");
    }
}
