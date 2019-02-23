#include <stdio.h>
#include <string.h>

void bonus(char[], char[], char[]);

int main()
{
    char sentence[100];
    char vowels[]={'a','e','i','o','u','\0'};
    char consonants[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','\0'};
    int i, j;

    gets(sentence);
    /**
    Unfortunately I could not be able to check if word is correct to process or not...
    */
    strlwr(sentence);//To compare every letter easily makes them lower words.

    for(i=0;vowels[i]!='\0';i++)//First turns vowels so it can print in alphabetic order.
    {
        for(j=0;sentence[j]!='\0';j++)
        {
            if(sentence[j]==vowels[i])
            {
                printf("%c",sentence[j]);//Because of there is no "\n" it prints them all on same line.
            }
        }
    }

    for(i=0;consonants[i]!='\0';i++)//Same system...
    {
        for(j=0;sentence[j]!='\0';j++)
        {
            if(sentence[j]==consonants[i])
            {
                printf("%c",sentence[j]);
            }
        }
    }

    bonus(sentence, vowels, consonants);
    return 0;
}

void bonus(char sentence[], char vowels[], char consonants[])
{
    int i, j;

    printf("\n\n        BONUS       \n");
    for(i=0;sentence[i]!='\0';i++)
    {
        for(j=0;vowels[j]!='\0';j++)
        {

        }
        printf("%c",sentence[i]);
    }
}
