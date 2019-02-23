/**
Author: @Cahid
Find the perfect numbers between 1 and 1000 and print them
with their divisors.
*/
#include<stdio.h>

int main()
{
    int number, divisor, sum=0;

    for(number=1;number<=1000;number++)     //Her say�y� teker teker deniyor...
    {
        for(divisor=1;divisor<=number/2;divisor++)      //B�lenleri tek tek deniyor(her say�n�n en b�y�k b�leni kendisinin yar�s�)
        {
            if(number%divisor==0)       //B�lenleri topluyor...
            {
                sum+=divisor;
            }
            if(sum==number)     //B�lenler toplam� e�itse sonu�...
            {
                printf("%d is a perfect number!\n",number);
                printf("Its divisors are:\n");

                for(divisor=1;divisor<=number/2;divisor++)      //Bu muhtemelen benim verimsizli�im ama
                {                                              //ayn� �ekilde tekrar b�lenleri bulup teker teker yazd�r�yor.
                    if(number%divisor==0)
                    {
                        printf("%d\t",divisor);
                    }
                }
                printf("\n\n");
            }
        }
        sum=0;      //Her say� i�in toplam� yeniden s�f�ra e�itliyor...
    }
}
