#include<stdio.h>

void convertString(char[]);

int main()
{
    char givenString[100];

    gets(givenString);

    convertString(givenString);

    return 0;
}

void convertString(char givenString[])
{
    char alteredNumber[1];
    int i=0, repeated, counter=0;

    while(givenString[i]!='\0')
    {
        if(givenString[i]==givenString[i+1])
        {
            for(repeated=givenString[i];repeated!=givenString[i+1];i++)
            {
                counter++;
                sprintf(alteredNumber, "%d",counter);
                givenString[i+1]=alteredNumber[0];
            }
            i+=counter;
        }
        i++;
    }
    puts(givenString);
}
