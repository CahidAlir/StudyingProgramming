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
    {//5 sat�r yapt�m �ncekindeki gibi
        for(space=0; space<nLine; space++)
        {//space kolay k�s�md� zaten bu da klasik art��
            printf(" ");
        }
        for(star=9; star>=nLine*2-1; star--)
        {//ba�ta sat�r say�s�na g�re dolduracak kadar y�ld�z olmas� i�in 9 tane gerekiyordu
         //y�ld�z say�s� azalaca�� i�in ilk loopla uyumlu olarak azalan fonksiyon yapt�m
         //di�eri de artt��� i�in tam istedi�im yerde durdurdum
         //�ncekini anlay�nca bu baya kolay geldi
          printf("*");
        }
        printf("\n");
    }
}
