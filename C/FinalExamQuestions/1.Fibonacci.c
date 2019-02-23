/**
Author: @Cahid
Find first 50 Fibonacci numbers and save them in an array.
Then print them on the screen, as four numbers in each line.
*/
#include<stdio.h>

int main()
{
    int counter;
    long long int fibArray[50];       //49. ve 50. elemanlar ancak long long ile s���yor :D

    fibArray[0]=0;          //�nceki iki eleman� toplayarak elemanlar� bulaca��m�z i�in
    fibArray[1]=1;         //ve ilk ikisini de bildi�imiz i�in en kolay yol ikisini de tan�mlamak...

    for(counter=1;counter<49;counter++)          //Ilk ikisi zaten tan�ml� oldu�u i�in 48 kere tekrar ediyor...
    {
        fibArray[counter+1]=fibArray[counter]+fibArray[counter-1];        //�ki �nceki ve bir �ncekini al topla vesaire...
    }

    for(counter=1;counter<=50;counter++)
    {
        printf(" %lld ",fibArray[counter-1]);       //Long long int'in g�sterimi "lld"

        if(counter%4==0)          //S�f�rdan ba�lamam�� olams�n�n sebebi bu...
        {                        //e�er s�f�rdan ba�lasayd� ilk eleman� yazd�rd�ktan sonra sat�r atlard�...
            printf("\n");
        }
    }
    return 0;
}
