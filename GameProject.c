/**
That's your new project..

Create a game..  Program should generate a number between 1-10.000
Than gives player ten rights to guess.
Your program should say "your number is bigger/smaller than my number"
Program should rate all guess.. The closer guess player did, the much more point that he gets..
I totally leave it to you.. Do whatever you like but just try each guess should be promoted between 1-50

when user find out the number that program generates, than decide:

If player guess the correct number less than 3 times than

+10.000 point and print "Sorry god, I couldn't recognize you!"

between 3-5

+7.500 point and print "Oracle!! Is that you?"

5-7 guesses

+5.000 point and print "Brilliant! You are good at it!"

7-9 guess

+1.000 point and print "Well done boy!"

10 guess

+200 point and print "You lucky bastard!"

and each case should finish with this statement

"YOUR TOTAL SCORE IS : XXXX"

You can google it if you wonder how a c program generates a number..

Good Luck!
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateNum();
int cases();

int main()
{
	//Try to code understandable and maintainable..
	//If I were you, I'd create a function for every single different work!

	int counter, score;
	int gss1, gss2, gss3, gss4, gss5, gss6, gss7, gss8, gss9, gss10;
	float scr1, scr2, scr3, scr4, scr5, scr6, scr7, scr8, scr9, scr10;

    srand(time(NULL));
    int r = rand()%10000+1;
    printf("%d", r);
    //this is for to learn if it works
    printf("Make a guess\n");
    scanf("%d",&gss1);

    if(gss1==r)
        {
        printf("Sorry god, I couldn't recognize you!\n");
        printf("YOUR TOTAL SCORE IS : 10000");
        return 0;
        }
    if(gss1<r)
    {
        printf("your guess is smaller then my number\n");
        printf("make another guess\n");
        scanf("%d", gss2);
        scr1= 100 / (r - gss1);
    }
    if(gss1>r)
    {
        printf("your guess is bigger then my number\n");
        printf("make another guess\n");
        scanf("%d", gss2);
        scr1= 100 / (gss1 - r);
    }
    if(gss2==r)
    {
        printf("Sorry god, I couldn't recognize you!\n");
        printf("YOUR TOTAL SCORE IS : 10000");
        return 0;
    }
    if(gss2<r)
    {
        printf("your guess is smaller then my number\n");
        printf("make another guess\n");
        scanf("%d", gss3);
        scr2= 100 / (r - gss2);
    }
    if(gss2>r)
    {
        printf("your guess is bigger then my number\n");
        printf("make another guess\n");
        scanf("%d", gss3);
        scr2= 100 / (gss2 - r);
    }
    if(gss3==r)
    {
        printf("Oracle!! Is that you?\n");
        printf("YOUR TOTAL SCORE IS : %f", score);
        return 0;
    }
    if(gss3<r)
    {
        printf("your guess is smaller then my number\n");
        printf("make another guess\n");
        scanf("%d", gss4);
        scr3= 100 / (r - gss3);
    }
    if(gss3>r)
    {
        printf("your guess is bigger then my number\n");
        printf("make another guess\n");
        scanf("%d", gss4);
        scr3= 100 / (gss3 - r);
    }
    if(gss4==r)
    {

    }
    return 0;
}



