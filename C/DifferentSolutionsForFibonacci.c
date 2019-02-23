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
	fibbonacci[0] = 1;//Ilk iki eleman el ile tanýmlý
	fibbonacci[1] = 1;

	for (i = 1; i < size; i++)
	 {
	 	fibbonacci[i+1] = fibbonacci[i] + fibbonacci[i-1];//Gayet basit bir þekilde arraya ekleme çýkarma örneði.
	 }                                                    //Elemanlar sýra ile eklendiði için tek yaptýðýn iki konum önceki ve
                                                          //Ve bir konum öncekileri toplamak...
	 for (int i = 0; i < size; i++)
	 {
	 	printf("%d. fibbonacci number is >> %d\n",i+1,fibbonacci[i]);
	 }
}

int recursiveSol(int ex) {
    if(ex = 0 || ex = 1) {
        return 1;
    } else {
        return recursiveSol(ex-1) + recursiveSol(ex-2);
    }
}
