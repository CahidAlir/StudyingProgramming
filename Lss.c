#include <stdio.h>

int main()
{
    int nLine, space, star;

    for(nLine=0;nLine<1000;nLine++)
    {
        for(space=1000;space>nLine;space--)
        {
            printf(" ");
        }
        for(star=0;star<2*nLine+1;star++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
