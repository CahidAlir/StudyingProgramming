#include<stdio.h>
#include<stdlib.h>

void convertString(char[], int);
int countElements(char[]);

int main()
{
    char givenString[100];
    int elementsOfArray;

    gets(givenString);

    elementsOfArray=countElements(givenString);

    convertString(givenString, elementsOfArray);

    return 0;
}

int countElements(char givenString[])
{
    int i=0, counter=0;

    while(givenString[i]!='\0')
    {
        counter++;
        i++;
    }
    return counter;
}

void convertString(char givenString[], int elementsOfArray)
{
    char alteredNumber[1];
    int i=0, counter=1, removeCount=0;
    int position;
    char repeated;

    while(givenString[i]!='\0')
    {
        if(givenString[i]==givenString[i+1])
        {
            int j=i;

            for(repeated=givenString[i];repeated==givenString[j+1];i++)
            {
                counter++;
                sprintf(alteredNumber, "%d",counter);
                givenString[i+1]=alteredNumber[0];
            }
            for(int m=1;m<=counter;m++)
            {
                for(position=i+1;position<elementsOfArray;position++)
                {
                    givenString[position+1]=givenString[position+2];
                }
                    givenString[elementsOfArray-m]=' ';
            }
        }
        i++;
    }
    puts(givenString);
}
