#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int isFullySentence(char[]);

int main() {

	char str1[] = "the quick brown fox jumps over the lazy dog";
	char str2[] = "example not fully sentence";

	if(isFullySentence(str1) == 1) {
		printf("First string is a fully sentence\n");
	} else {
		printf("First string is not a fully sentence\n");
	}

	if(isFullySentence(str2) == 1) {
		printf("Second string is a fully sentence\n");
	} else {
		printf("Second string is not a fully sentence\n");
	}
}

int isFullySentence(char sentence []) {

	char alphabet[] = {'a','b','c','d','e',
					   'f','g','h','i','j',
					   'k','l','m','n','o',
					   'p','q','r','s','t',
					   'u','v','w','x','y','z'};
	int i,j = 0;
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
