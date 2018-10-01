/**
Bu example'da yapmanı istediğim şükül şu


    *
   ***
  *****
 *******
*********

Sadece 1 adet yıldız, bir adet boşluk ve bir adet '\n' kullan
yaptığın çözümü plz printShape() fonksiyonunun içine yaz.
*/

#include <stdio.h>

int main()
{
	printShape();
	return 0;
}

void printShape()
{
	int star, nLine, space;
	for(nLine=0; nLine<7; nLine++)
    {
        for(space=6; space>nLine; space--)
        {
            printf(" ");
        }
        for(star=1; star<nLine*2+2; star++)
        {
            printf("*");
        }
         printf("\n");
    }
}








