/**
Bu da char arraylari i�in g�zel bir �rnek bence
istersen �nce kendin ��zmeye �al��.
*/
#include<stdio.h>

int main()
{
    char sentence[100];
    int i=0, n, numberOfChars=0;

    printf("Enter the sentence:");
    gets(sentence);

    while(sentence[i]!='\0')//Bak buna dikkat karakterleri (") ile de�il (') ile g�stermek gerekiyor.
    {
        numberOfChars++;//�nce ka� harf var ona bak�yor...
        i++;
    }

    if(sentence[numberOfChars-1]=='?')//Ka� harf oldu�unu bildi�imiz i�in son harfe bak�yor;
    {                                 //birincisi soru c�mlesi mi diye ikincisi oray� de�i�tirece�i i�in...
        for(n=1;n<=numberOfChars;n++)
        {
            if(n==numberOfChars)// son haneye kadar normal yazd�r�yor
            {
                printf(", please?");//son haneyi bununla de�i�tirip yazd�r�yor...
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
Bu challenge'in olay� array� inceleyip de�i�tirmek...
*/
