/**
Author: @Cahid
Find the perfect numbers between 1 and 1000 and print them
with their divisors.
*/
#include<stdio.h>

int main()
{
    int number, divisor, sum=0;

    for(number=1;number<=1000;number++)     //Her sayýyý teker teker deniyor...
    {
        for(divisor=1;divisor<=number/2;divisor++)      //Bölenleri tek tek deniyor(her sayýnýn en büyük böleni kendisinin yarýsý)
        {
            if(number%divisor==0)       //Bölenleri topluyor...
            {
                sum+=divisor;
            }
            if(sum==number)     //Bölenler toplamý eþitse sonuç...
            {
                printf("%d is a perfect number!\n",number);
                printf("Its divisors are:\n");

                for(divisor=1;divisor<=number/2;divisor++)      //Bu muhtemelen benim verimsizliðim ama
                {                                              //ayný þekilde tekrar bölenleri bulup teker teker yazdýrýyor.
                    if(number%divisor==0)
                    {
                        printf("%d\t",divisor);
                    }
                }
                printf("\n\n");
            }
        }
        sum=0;      //Her sayý için toplamý yeniden sýfýra eþitliyor...
    }
}
