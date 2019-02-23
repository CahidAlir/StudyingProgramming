#include <stdio.h>

void printUpside();
void printDownside();

int main()
{
    printUpside();
    printDownside();
    return 0;
}

void printUpside()
{
  int nLine, stars, spaces;

  for(nLine = 1; nLine<=5; nLine++)
  {
    for(spaces=0;spaces<=5-nLine;spaces++)
    {
      printf(" ");
    }
    for(stars=1;stars<=2*nLine-1;stars++)
    {
      printf("*");
    }
    printf("\n");
  }
}
//1. Commentler eklenmemiş
//2. Reverse.c yi niye silmedin
//3. eğer anlayarak yaptığını düşünüyorsan star'ı 1 den başlat

void printDownside()
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
