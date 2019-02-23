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
    int fakeEnd=50;     //Bu deðer deðiþtirme sayýsýna göre azalacak ki
                       //sondakileri öncekilerle deðiþtirmeye çalýþmasýn
    int memory;     //Bu deðiþkeni deðiþtirme iþleminde kullanýyoruz...
    int counter;

    srand(time(NULL));      //Randomun her seferinde farklý olmasý için burada bunu tanýmladýk...

    for(counter=0;counter<50;counter++)
    {
        array[counter]=1+rand()%100;      //Normalde 0 ile 99 arasýnda deðerler alabilecekken +1 ile aralýk 1 ile 100 arasýnda oldu.
    }

    for(counter=1;counter<=50;counter++)//Bunlar sadece yazdýrýp farký anlamak için...
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
        if(array[counter]%3==0)                   //3e bölünen elemanlarda...
        {
            memory=array[fakeEnd];              //Önce en sondaki elemaný hafýzaya atýyor...
            array[fakeEnd]=array[counter];     //Sonra 3e bölünen elemaný en sona atýyor...
            array[counter]=memory;            //Hafýzadaki elemaný da 3e bölünen elemanýn yerine atýyor...
            fakeEnd--;                       //Ve en sondaki elamana bir deðer atadýðýmýz için bir önceki elemana atamak
        }                                   //amacýyla bu deðeri azaltýyoruz...
    }

    for(counter=1;counter<=50;counter++)//Bunlar sadece yazdýrýp farký anlamak için...
    {
        printf("%d\t",array[counter-1]);

        if(counter%10==0)
            {
                printf("\n");
            }
    }
    return 0;
}
