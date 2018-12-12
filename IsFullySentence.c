#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isFullySentence(char[]);
int mostCommon(char[]);

int main() {

	char givenSentence[100];
	gets(givenSentence);


	if(isFullySentence(strlwr(givenSentence)) == 1) {
		printf("Given sentence is a fully sentence\n");
	} else {
		printf("Given sentence is not a fully sentence\n");
	}

    printf("%d",mostCommon(givenSentence));

    return 0;
}

int isFullySentence(char sentence []) {

	char alphabet[] = {'a','b','c','d','e',
					   'f','g','h','i','j',
					   'k','l','m','n','o',
					   'p','q','r','s','t',
					   'u','v','w','x','y','z'};
	int i = 0 ,j = 0;
	int append = 0;
	while(sentence[i] != '\0') {
		for(j=0; j<26; j++) {
			if(sentence[i] == alphabet[j]) {
				alphabet[j] = '-';
				append++;
			}
		}
		i++;
	}
    if(append == 26) {
        return 1;
    }
    return 0;
}

int mostCommon(char sentence[])
{

}
