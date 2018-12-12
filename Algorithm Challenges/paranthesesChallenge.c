#include<stdio.h>

int checkParantheses(char[]);

int main()
{
    char sentence[100];
    gets(sentence);
    int count;

    count=checkParantheses(sentence);

    if(count==0)
    {
        printf("Sentence is valid");
        return 0;
    }
    printf("Invalid sentence!");
    return 0;
}

int checkParantheses(char sentence[])
{
    int count=0, i=0;

    while(sentence[i]!= '\0')
    {
        if(count==0 && sentence[i]== ')')
            {
                return 1;
            }
        if(sentence[i]=='(')
        {
            count++;
        } else if(sentence[i]==')')
                {
                    count--;
                }

        i++;
    }
    return count;
}
