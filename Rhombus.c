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

void printShapeSaidSol();
int main()
{
  //printShape();
  printShapeSaidSol();
  return 0;

}
void printShape()
{
 //kardeşim yazacağın kodu sikem öncelikle
   int star, nLine, space;
  for(nLine=5; nLine>-1; nLine--)//ne yarrak yemeye 5 den -1 e kadar azalttın merak etmiyor değilim
    {
        for(space=0; space<nLine; space++)//bunu da sıfırdan arttırıyorum diye diyorsan yine amk
        {
            printf(" ");
        }
        for(star=4; 0<star<nLine; star--)//heh iştee zurnanın zırt dediği yer..
        {                                //be öküz 0<star<nLine diye bir condition mı olur
           // printf("*",star * 2 + 1);  Hayır zaten bu satır compile error veriyor... 
            //Bak güzel kardeşim printf("burada senin bi değişken mi var be amk!!..") değişken varken
            //mesela printf("Al sana değişken -> %d",star*2+1); bu iş yapar.. o da sayı bastırır...

            
        }
         printf("\n");
    }
}

void printShapeSaidSol() 
{
  int nLine, stars, spaces;
  //MADEM 5 satır yazdıracağız...
  for(nLine = 1; nLine<=5; nLine++) //nLine sırasıyla 1,2,3,4,5 değerlerini alacak.. 
  {                                 //yani bu amk döngüsünün içindekiler 5 defa çalışacak...

    /*
    bak şimdi bir fonksiyon lazım.. öyle ki
    1->4
    2->3
    3->2
    4->1
    5->0

    eh azıcık mat bilen insan der ki bu f(x) = -x+5 fonksiyonu... 
    yani 5 defa çalışsın ve çıkış koşulu bu olsun
    */
    for(spaces=1;spaces<=5-nLine;spaces++) //x = nLine; y = spaces... yerlerine koyunca çok mantıklı olacak..
    {
      printf(" ");
    }

    /*
    Şimdi aynısının laciverti.. bu sefer
    1->1
    2->3
    3->5
    4->7
    5->9
    ki bu da 2x-1 fonksiyonu
    */
    for(stars=1;stars<=2*nLine-1;stars++)
    {
      printf("*");
    }


    printf("\n");//burası 5 defa çalışacak..
  }
}






