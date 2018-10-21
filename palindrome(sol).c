/**
	@author Said
*/

#include <stdio.h>

long getNumberFromUser();
int findDigitCount(long  a);
long getReverse(long a, int b);
void isItPalindrome(long a, long b);
//BONUS :  long closestPalindromeFinder(long notPalindrome);

int main()
{
	long number,reverse;
	int digit;

	number = getNumberFromUser();
	digit = findDigitCount(number);
	reverse = getReverse(number, digit);
	isItPalindrome(number, reverse);
}

long getNumberFromUser()
{
	long n;
	printf("Enter a positive integer :\n");
	scanf("%ld",&n);

	while(n < 0)
	{
		printf("Enter a valid number\n");
		scanf("%ld",&n);
	}
	return n;
}

int findDigitCount(long  number)
{
	int digitNumber=0;

	{
		while(number!=0)
		{
			number = number / 10;
			digitNumber++;
		}
	}
	return digitNumber;
}

long getReverse(long number, int digit)
{
	long reverse = 0;
	int i;
	for(i=0; i<digit; i++)
	{
		reverse += number%10;
		if(i+1 < digit)
			reverse *= 10;

		number /= 10;
	}

	return reverse;
}

void isItPalindrome(long a, long b)
{
    if(a==b)
    {
        printf("Yes it is a palindrome!..\n");
        return;
    }
    printf("This is not a palindrome!..\n");
}
