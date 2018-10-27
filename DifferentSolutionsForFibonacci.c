#include <stdio.h>

void iterativeSolution();
void arraySolution();
int recursiveSol(int);

int main()
{
	//iterativeSolution();
	arraySolution();
	//recursiveSolution();
	return 0;
}

void iterativeSolution() {

	int num, counter;
	int prev = 0;
	int next = 1;
	int fib = 1;
	printf("Enter how many fibbonacci number do you want to see\n");
	scanf("%d",&num);
	for(counter = 0; counter<num; counter++) {

		printf("%d. fibbonacci number is >> %d\n",counter+1, fib);
		prev = next;
		next = fib;
		fib = prev + next;
	}
}

void arraySolution() {
	int size,i;
	printf("Enter how many fibbonacci number do you want to see\n");
	scanf("%d",&size);
	int fibbonacci[size];
	fibbonacci[0] = 1;
	fibbonacci[1] = 1;

	for (i = 1; i < size; i++)
	 {
	 	fibbonacci[i+1] = fibbonacci[i] + fibbonacci[i-1];
	 }

	 for (int i = 0; i < size; i++)
	 {
	 	printf("%d. fibbonacci number is >> %d\n",i+1,fibbonacci[i]);
	 }
}

int recursiveSol(int ex)
