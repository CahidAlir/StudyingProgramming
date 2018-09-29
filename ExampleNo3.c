/**
Çok basit bir if else egzersiz
Verilen sayının 1000'den büyük mü küçük mü olduğunu gösteren egzersiz..
*/
#include <stdio.h>
int main()
{
	int number;

	printf("Enter the number :\n");
	scanf("%d" ,&number);

	if(number < 1000) {
		printf("%d is less than 1000\n",number);
	} else if(number > 1000) {
		printf("%d is bigger than 1000\n",number);
	} else {
		printf("Your number is 1000\n");
	}

	
	return 0;
}