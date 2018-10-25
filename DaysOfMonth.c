/**
Author: @Cahid
Amaç istenilen yýl ve aydaki gün sayýsýný artýk yýlý
hesaba katarak bulmak.
*/

#include <stdio.h>
#include <stdbool.h>

int getDate();
int calculateDays(int month, int year);
int checkLeapYear(int year);
void printInvalidArgumentError();

int main() {

    int day, month, year;//Bunları initialize etmiyorsun.. e değiştirmiyorsun da
                        //Sonra nerden çıktı bu sayılar ashsahdas
                        //iki tane return value'su olamaz.. ya pointer kullanacaksın ki onu bilmiyon ya da
                        // getYear ve getMonth diye iki fonksiyonun olacak
    year = getYear();
    month = getMonth();
    day = calculateDays(month, year);
    //getDate();
    //calculateDays(month, year); bunları da babayın hayrına çağır..

    printf("There are %d days in %d. month of year %d", day, month, year);

    return 0;
}
/**
burayı hiç kullanmıcam
*/
int getDate()
{
    int month, year;

    printf("Enter the year:\n");
    scanf("%d", &year);

    if(year<0) //Bir defa sordun ya burada..
    {
        printf("You have entered invalid year, please enter a valid one:\n");
        scanf("%d",&year);//ben burada -2 girersem.. yıl -2 olacak.. ayrıca yıl diye 15648498 girsem ne olacak
    }
    printf("Enter the month:\n");
    scanf("%d", &month);

    if(month<1 || 12<month)
    {
        printf("You have entered invalid month, please enter a valid one:\n");
        scanf("%d",&month);//bunda da aynı mantık.. ee burada 13 girdim.. bi daha bakmıyorsun ki..
    }

    printf("getDate:%d  %d\n", month, year);//Bunlar test amaçlý.

    return month, year;
}

int calculateDays(int month, int year)/**Galiba burada sorun veriyor
                                      switch case'e girmiyor gibi gözüküyor
                                      ...gayet de girer abisi*/
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

    //printf("calculateDays:%d   %d    %d\n", day, month, year);//Bunlar test amaçlý.

    return day;//Ama burada hepsini nasýl deðiþtirebiliyor onu hiç anlamadým
}

int checkLeapYear(int year)
{
    //int day;
    //if, else if ve else yapmak daha güzel olur..
    //çünkü spagetti kod oluşuyor.
    /*
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
    return day;
    */
    //ya da ben gibi 3 satırda temizce yaz...
    bool condition = (year%4==0 && year%100!=0) || (year%400 == 0);
    if(condition)
        return 29;
    return 28;
}

int getMonth() {
    int month=0;//Init etmek C de her zaman iyidir...
    bool notValid = true;
    while(notValid)
    {
        printf("Enter the month :\n");
        scanf("%d",&month);
        if(month>1 && month<12)
            notValid = false;
        if(notValid)
            printInvalidArgumentError();
    }
    return month;
}

int getYear() {
    int year=0;//Init etmek C de her zaman iyidir...
    bool notValid = true;
    while(notValid)
    {
        printf("Enter the year :\n");
        scanf("%d",&year);
        if(year>0 && year<3000)//O yıldan sonra kim öle kim kala...
            notValid = false;
        if(notValid)
            printInvalidArgumentError();
    }
    return year;
}

void printInvalidArgumentError() {
    printf("You have entered invalid value.. Please try again!\n");
}
