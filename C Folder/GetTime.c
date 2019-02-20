#include<stdio.h>
#include<math.h>

int showMenu();
void getSec();
void getMin();
void tryAgain();

int main()
{
    int menu;
    menu=showMenu();

    switch(menu)
    {
        case 1:
        getSec();
        break;

        case 2:
        getMin();
        break;
    }
    tryAgain();
}

int showMenu()
{
    int menu;
    printf("Choose the operation you you want:\n");
    printf("1.Turn seconds\n2.Turn minutes\n");
    scanf("%d",&menu);

    return menu;
}

void tryAgain()
{
    int i;

    printf("press 1 to do it again, 0 to exit.\n");
    scanf("%d",i);
    if(i==0 && i==1)
    {
        if(i==1)
        {
            main();
        }
    } else
    {
        printf("Ýnvalid option!");
        tryAgain();
    }
}

void getSec ()
{
    int sec, min, hour;

    printf("Enter the seconds:\n");
    scanf("%d",&sec);

    min=round(sec/60);
    sec=sec%60;
    hour=round(min/60);
    min=min%60;

    printf("%d hour(s), %d minute(s), %d second(s)\n",hour, min, sec);
}

void getMin()
{
    int min, hour;

    printf("Enter the minutes:\n");
    scanf("%d",&min);

    hour=round(min/60);
    min=min%60;

    printf("%d hour(s), %d minute(s)\n",hour, min);
}
