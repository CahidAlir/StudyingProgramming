/**
Faktöriyelin recursive çözümü
*/
#include <stdio.h>

long learnFactorial(int);
int main()
{
	long factorial = 0;
	int entry;
	printf("Enter the number that you want to  learn factorial\n");
	scanf("%d",&entry);

	factorial = learnFactorial(entry);
	printf("%ld" ,factorial);
}

long learnFactorial(int e) {

	if(e == 0 || e == 1) {
		return 1;
	}

	return e*learnFactorial(e-1);
}
