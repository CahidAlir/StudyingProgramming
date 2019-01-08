/**
Author:Cahid Alýr
Number:180315006
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isFullySentence(char[]);
char mostCommon(char[]);

int main()
{
	char givenSentence[100];//Sentence identified as an array up to 100 element.
	gets(givenSentence);//Program gets the sentence from user.


	if(isFullySentence(strlwr(givenSentence)) == 1)//Before passing the sentence to another function,
    {                                              //program turns every letter to lowercase
		printf("Given sentence is a fully sentence\n");
	} else {
		printf("Given sentence is not a fully sentence\n");
	}

    printf("%c",mostCommon(givenSentence));

    return 0;
}

int isFullySentence(char sentence [])
{

    char alphabet[] = {'a','b','c','d','e',
					   'f','g','h','i','j',
					   'k','l','m','n','o',
					   'p','q','r','s','t',
					   'u','v','w','x','y','z'};

	int i = 0 ,j = 0;
	int append = 0;//This variable is for counting how many matching letters there is.
	while(sentence[i] != '\0')//This loop turns until it comes to last element which is null character.
    {
		for(j=0; j<26; j++)//With this loop program checks every letter of alphabet
        {                  //with the current element of sentence array.
			if(sentence[i] == alphabet[j]) {
				alphabet[j] = '-';//When there is a match program deletes it from
				append++;         //alphabet to not to count it again.
			}                     //Then increases the append.
		}
		i++;
	}
    if(append == 26)//If append is 26 it means every letter of the alphabet
    {               //is matched so sentence is a fully sentence.
        return 1;
    }
    return 0;
}

char mostCommon(char sentence[])
{

    char alphabet[] = {'a','b','c','d','e',
					   'f','g','h','i','j',
					   'k','l','m','n','o',
					   'p','q','r','s','t',
					   'u','v','w','x','y','z'};

    int frequency[26]={0};//This is an array which is parallel to alphabet array
    int repeatCount=0;    //to count how many time an element of alphabet has been seen in sentence.
    char mostCommonWord='a';

    for(int i=0;sentence[i]!='\0';i++)
    {
        for(int j=0;j<26;j++)
        {
            if(alphabet[j]==sentence[i])//When there is a match element of frequency
            {                           //which is corresponding to alphabet will be increased.
                ++frequency[j];
            }
        }
    }

    for(int i=0;i<26;i++)
    {
        if(frequency[i]>repeatCount)//This basic loop will find the biggest number from frequency
        {                           //and the equivalent of that element from alphabet will be assigned as most common word.
            repeatCount=frequency[i];
            mostCommonWord=alphabet[i];
        }
    }
    return mostCommonWord;
}
