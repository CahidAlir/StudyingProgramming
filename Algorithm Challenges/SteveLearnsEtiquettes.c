#include<stdio.h>

int main()
{
    char sentence[100];
    int i=0, n, numberOfChars=0;

    printf("Enter the sentence:");
    gets(sentence);

    while(sentence[i]!='\0')
    {
        numberOfChars++;
        i++;
    }

    if(sentence[numberOfChars-1]=='?')
    {
        for(n=1;n<=numberOfChars;n++)
        {
            if(n==numberOfChars)
            {
                printf(", please?");
                return 0;
            }
            printf("%c",sentence[n-1]);
        }
    } else {
        printf("No job for me I guess.\n\n");
        main();
    }
}

