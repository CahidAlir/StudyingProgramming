/**
Author: @Cahid
Write a C program that satisfies the following:
    a. Form an array of 50 elements.
    b. Fill elements with random numbers by writing a function.
    c. Write another function to swap the elements of the array according to this rule:
        I.Start linear search from the beginning of the array.Take the first number divisible
        by 3 found and swap it with the last number of the array.
        II.For the second number divisible by 3, swap it the number second number from the last and so on...
*/
#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int array[50];
    int fakeEnd=50;     //Bu de�er de�i�tirme say�s�na g�re azalacak ki
                       //sondakileri �ncekilerle de�i�tirmeye �al��mas�n
    int memory;     //Bu de�i�keni de�i�tirme i�leminde kullan�yoruz...
    int counter;

    srand(time(NULL));      //Randomun her seferinde farkl� olmas� i�in burada bunu tan�mlad�k...

    for(counter=0;counter<50;counter++)
    {
        array[counter]=1+rand()%100;      //Normalde 0 ile 99 aras�nda de�erler alabilecekken +1 ile aral�k 1 ile 100 aras�nda oldu.
    }

    for(counter=1;counter<=50;counter++)//Bunlar sadece yazd�r�p fark� anlamak i�in...
    {
        printf("%d\t",array[counter-1]);

        if(counter%10==0)
            {
                printf("\n");
            }
    }
    printf("\n\n\n\n");

    for(counter=0;counter<fakeEnd;counter++)
    {
        if(array[counter]%3==0)                   //3e b�l�nen elemanlarda...
        {
            memory=array[fakeEnd];              //�nce en sondaki eleman� haf�zaya at�yor...
            array[fakeEnd]=array[counter];     //Sonra 3e b�l�nen eleman� en sona at�yor...
            array[counter]=memory;            //Haf�zadaki eleman� da 3e b�l�nen eleman�n yerine at�yor...
            fakeEnd--;                       //Ve en sondaki elamana bir de�er atad���m�z i�in bir �nceki elemana atamak
        }                                   //amac�yla bu de�eri azalt�yoruz...
    }

    for(counter=1;counter<=50;counter++)//Bunlar sadece yazd�r�p fark� anlamak i�in...
    {
        printf("%d\t",array[counter-1]);

        if(counter%10==0)
            {
                printf("\n");
            }
    }
    return 0;
}
