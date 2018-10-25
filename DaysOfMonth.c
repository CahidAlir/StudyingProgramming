/**
Author: @Cahid
Amaç istenilen yýl ve aydaki gün sayýsýný artýk yýlý
hesaba katarak bulmak.
*/

#include <stdio.h>

int getDate();
int calculateDays(int month, int year);
int checkLeapYear(int year);

int main()
{
    int day, month, year;

    getDate();
    calculateDays(month, year);

    printf("There are %d days in %d. month of year %d", day, month, year);

    return 0;
}

int getDate()
{
    int month, year;

    printf("Enter the year:\n");
    scanf("%d", &year);

    if(year<0)
    {
        printf("You have entered invalid year, please enter a valid one:\n");
        scanf("%d",&year);
    }
    printf("Enter the month:\n");
    scanf("%d", &month);

    if(month<1 || 12<month)
    {
        printf("You have entered invalid month, please enter a valid one:\n");
        scanf("%d",&month);
    }

    printf("getDate:%d  %d\n", month, year);//Bunlar test amaçlý.

    return month, year;
}

int calculateDays(int month, int year)/**Galiba burada sorun veriyor
                                      switch case'e girmiyor gibi gözüküyor*/
{
    int day;

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        day = 31;
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        day = 30;
        break;

        case 2:
        day = checkLeapYear(year);
        break;
    }

    printf("calculateDays:%d   %d    %d\n", day, month, year);//Bunlar test amaçlý.

    return day;//Ama burada hepsini nasýl deðiþtirebiliyor onu hiç anlamadým
}

int checkLeapYear(int year)
{
    int day;

    if(year%4==0 && year%100!=0)
    {
        day = 29;
    } else
    {
        day = 28;
    }
    if(year%400==0)
    {
        day = 29;
    }

    printf("checkLeapYear:%d   %d\n", day, year);//Bunlar test amaçlý.

    return day;
}
