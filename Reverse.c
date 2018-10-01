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
    {//5 satýr yaptým öncekindeki gibi
        for(space=0; space<nLine; space++)
        {//space kolay kýsýmdý zaten bu da klasik artýþ
            printf(" ");
        }
        for(star=9; star>=nLine*2-1; star--)
        {//baþta satýr sayýsýna göre dolduracak kadar yýldýz olmasý için 9 tane gerekiyordu
         //yýldýz sayýsý azalacaðý için ilk loopla uyumlu olarak azalan fonksiyon yaptým
         //diðeri de arttýðý için tam istediðim yerde durdurdum
         //öncekini anlayýnca bu baya kolay geldi
          printf("*");
        }
        printf("\n");
    }
}
