/**
AUTHOR = CAHID ALIR
IF/ELSE EGZERSIZI

*/
#include <stdio.h>
#define KG 1
#define POUND 2
int showMenu();

int main()
{
    float result = 0;
    float num1, num2;
    int menu = 0;


do {
    menu = showMenu();
} while(menu<1 || menu>2);

    printf("Enter your weight: \n");
    scanf("%f", &num1);
    printf("enter your height: \n");
    scanf("%f", &num2);

    switch(menu)
{
        case KG:
        result = num1 / (num2 * num2);
        break;

        case POUND:
        result = num1 * 703 / (num2 * num2);
        break;
}

    printf("your BMI is %.2f\n",result);

    return 0;
}
int showMenu()
{

	int menu = 0;
	printf("Select Units : \n");
	printf("1.Kilograms \n");
	printf("2.Pounds \n");
//?&menu
	scanf("%d" ,&menu);
	return menu;
}
