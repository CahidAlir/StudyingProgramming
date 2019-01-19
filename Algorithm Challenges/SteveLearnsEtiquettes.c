/**
Bu da char arraylari için güzel bir örnek bence
istersen önce kendin çözmeye çalýþ.
*/
#include<stdio.h>

int main()
{
    char sentence[100];
    int i=0, n, numberOfChars=0;

    printf("Enter the sentence:");
    gets(sentence);

    while(sentence[i]!='\0')//Bak buna dikkat karakterleri (") ile deðil (') ile göstermek gerekiyor.
    {
        numberOfChars++;//Önce kaç harf var ona bakýyor...
        i++;
    }

    if(sentence[numberOfChars-1]=='?')//Kaç harf olduðunu bildiðimiz için son harfe bakýyor;
    {                                 //birincisi soru cümlesi mi diye ikincisi orayý deðiþtireceði için...
        for(n=1;n<=numberOfChars;n++)
        {
            if(n==numberOfChars)// son haneye kadar normal yazdýrýyor
            {
                printf(", please?");//son haneyi bununla deðiþtirip yazdýrýyor...
                return 0;
            }
            printf("%c",sentence[n-1]);
        }
    } else {
        printf("No job for me I guess.\n\n");
        main();
    }
}
/**
Bu challenge'in olayý arrayý inceleyip deðiþtirmek...
*/
