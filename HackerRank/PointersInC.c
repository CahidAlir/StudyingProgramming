#include <stdio.h>

int showMenu();
void getValues();
void navigator(int);

int main()
{
    int choice=showMenu();

    getValues();
    navigator(choice);
}

int showMenu()
{
    int choice=0;

    printf("What would you like to do?\n");
    printf("1.Print program per day.\n2.Print program per week.\n3.Print program per month.\n");
    scanf("%d",&choice);

    while(choice<1 || choice>3)
    {
        printf("Invalid operand!\nPlease choose from below:");
        printf("1.Print program per day.\n2.Print program per week.\n3.Print program per month.\n");
        scanf("%d",&choice);
    }
    return choice;
}

void getValues()
{
    int less;
    printf("How many lessons do you have?\n");
    scanf("%d",&less)

    int lessonsdifficulty[less]={0};

    for(int i=1;i<=less;i++)
    {
        printf("Decide the difficulty of the %d th lesson from 1 to 10:\n",i);
        scanf("%d"&lessonsdifficulty[i-1]);
        if(lessonsdifficulty[i-1]<1 || lessonsdifficulty[i-1]>10)
        {
            printf("Invalid difficulty!Please enter a number between 1 and 10:\n");
            scanf("%d"&lessonsdifficulty[i-1]);
        }
    }

}
