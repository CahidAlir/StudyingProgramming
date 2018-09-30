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
	for(nLine=5; nLine>-1; nLine--)
    {
        for(space=0; space<nLine; space++)
        {
            printf(" ");
        }
        for(star=4; 0<star<nLine; star--)
        {
            printf("*",star * 2 + 1);
        }
         printf("\n");
    }
}








