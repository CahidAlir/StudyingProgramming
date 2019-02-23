/**
Author: @Cahid
Find first 50 Fibonacci numbers and save them in an array.
Then print them on the screen, as four numbers in each line.
*/
#include<stdio.h>

int main()
{
    int counter;
    long long int fibArray[50];       //49. ve 50. elemanlar ancak long long ile sýðýyor :D

    fibArray[0]=0;          //Önceki iki elemaný toplayarak elemanlarý bulacaðýmýz için
    fibArray[1]=1;         //ve ilk ikisini de bildiðimiz için en kolay yol ikisini de tanýmlamak...

    for(counter=1;counter<49;counter++)          //Ilk ikisi zaten tanýmlý olduðu için 48 kere tekrar ediyor...
    {
        fibArray[counter+1]=fibArray[counter]+fibArray[counter-1];        //Ýki önceki ve bir öncekini al topla vesaire...
    }

    for(counter=1;counter<=50;counter++)
    {
        printf(" %lld ",fibArray[counter-1]);       //Long long int'in gösterimi "lld"

        if(counter%4==0)          //Sýfýrdan baþlamamýþ olamsýnýn sebebi bu...
        {                        //eðer sýfýrdan baþlasaydý ilk elemaný yazdýrdýktan sonra satýr atlardý...
            printf("\n");
        }
    }
    return 0;
}
