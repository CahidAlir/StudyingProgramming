#include <stdio.h>
#define ADD 1
#define SUB 2
#define MULT 3
#define DIV 4

int showMenu();

int main () {

	float result = 0;
	float num1, num2;

	int menu = showMenu();
	while(menu<1 || menu >4) {
		menu = showMenu();
	}

	printf("Enter the first variable\n");
	scanf("%f",&num1);
	printf("Enter the second variable\n");
	scanf("%f",&num2);

	switch(menu) {
		
		case ADD:
		result = num1 + num2;
		break;

		case SUB:
		result = num1 - num2;
		break;

		case MULT:
		result = num1 * num2;
		break;

		case DIV:
		result = num1 / num2;
		break;
	}

	printf("\nResult is\n----------------------------\n");
	printf("%.2f",result);
	printf("\n----------------------------\n\n");
    return 0;
}

int showMenu() {

	int menu = 0;
	printf("Select Operation : \n");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");

	scanf("%d" ,&menu);
	return menu;
}