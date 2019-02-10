#include<stdio.h>

int findSize(char[], int);
int convert(char[], int, int);

int main()
{
    int i=0;
    char sentence[100];
    gets(sentence);
    int size=findSize(sentence, i);
    convert(sentence, size, i);

    return 0;
}

int findSize(char sentence[], int i)
{

    if(sentence[i]=='\0')
    {
        return i;
    }
    i++;
    return findSize(sentence, i);
}

int convert(char sentence[], int size, int i)
{
    i++;
    if(size-i==0)
    {
        printf("%c",sentence[size-i]);
        return 0;
    }
    printf("%c",sentence[size-i]);

    return convert(sentence, size, i);
}

