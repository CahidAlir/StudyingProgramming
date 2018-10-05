/**
@author Cahid
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void showMenu();
void startGame();
int evaluateScore(int remaining);
int guessPoint(int guess, int random);
char askAgain();

int main()
{
	showMenu();
}

void showMenu()
{
	int option = 0;
	printf("1. Start Game\n");
	printf("2. Exit\n");
	scanf("%d",&option);
	while(option < 1 || option > 2) {
		printf("You have entered invalid option. Please enter 1 or 2\n");
		scanf( "%d" ,&option);
	}

	switch(option)
	{
		case 1:
			startGame();
			break;
		case 2:
		break;
	}
}

void startGame()
{
	srand(time(NULL));
	int randomNumber = rand()%10000 + 1;
	int lives = 15;
	int guess;
	int score = 0;

	printf("I kept a number between 1-10000 from my mind.\n");
	while(lives > 0)
	{
		printf("Enter your guess\n");
		scanf("%d",&guess);

		if(randomNumber == guess) {
			score += evaluateScore(lives);
		break;
		} else if(randomNumber < guess) {
			printf("Your number is bigger than mine.\n");
		} else {
			printf("Your number is smaller than mine.\n");
		}

		score += guessPoint(guess, randomNumber);
		lives--;
	}

	printf("|-----------------Game Over-----------------|\n");
	if(guess == randomNumber) {
		printf("You win, you got %d point\n",score);
	}
	else {
		printf("You lost, My number was %d. You got %d point\n",randomNumber, score);
	}

	char answer = askAgain();

	if (answer == 'y' || answer == 'Y')
	{
		startGame();
	} else {

		printf("Good Bye...\n");
	}

}
/**
	En düşük uzaklık 1 olabilir.
	En yüksek uzaklık 9999 olabilir.
	x'in değer kümesi [1,9999]
	görüntü kümesi de [1,100]

			^ y
		100	|.
			|  .
			|      .
			|         .
			|             .
		1	|                 .
			---------------------> x
			1                 9999

			f(1) = 100
			f(9999) = 1

			y = ax + b

			100 = a+b
			1 = 9999a + b
			-99 = 9998a
			-99/9998 = a
			a = -0.01
			b = 100.01

*/
int guessPoint(int guess, int random)
{
	float a = -0.01;
	float b = 100.01;
	int x = abs(guess-random);
	float result = a*x + b;
	int returnedValue = (int) round(result);
	return returnedValue;
}

int evaluateScore(int remaining)
{
	int score = 0;
	switch(remaining) {

        case 15:
        case 14:
		case 13:
		case 12:
		case 11:
			printf("Sorry God! I couldn't recognize you!\n");
			score = 10000;
			break;
		case 10:
		case 9:
		case 8:
			printf("Oracle! is that you ?\n");
			score = 7500;
			break;
		case 7:
		case 6:
		case 5:
			printf("Well done boy! You are good at it!\n");
			score = 5000;
			break;
		case 4:
		case 3:
			printf("You can do it better\n");
			score = 1000;
			break;
		case 2:
			printf("Nahh.. Is it your best?\n");
			score = 500;
			break;
		case 1:
			printf("You lucky bastard!\n");
			score = 100;
			break;
	}
	return score;
}

char askAgain() {

	char answer;

	printf("Do you want to play again? (y/n)\n");
	scanf(" %c", &answer);

	return answer;
}
