/**
Author:Cahid Alýr
Number:180315006
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TRANSPOSE 1
#define ADD 2
#define MULT 3
#define EXIT 4

int showMenu();
void transposedArray();
void additionOperator();
void multiplicationOperator();

int main()
{
    int choice;
    choice=showMenu();

    switch(choice)//Due to choice from showMenu function program
    {             //decides which function will be called.
        case TRANSPOSE:
            transposedArray();
            break;

        case ADD:
            additionOperator();
            break;

        case MULT:
            multiplicationOperator();
            break;

        case EXIT:
            return 0;
    }

}

int showMenu()//This is a basic menu function asks to user his/her choice,
{//MENU...    //checks if its a valid choice then returns it to main function.
    int choice;

    printf("What would you like to do?\n");
    printf("1.Transpose\n2.Addition\n3.Multiplication\n4.Exit\n");
    scanf("%d",&choice);
    if(choice<1 || choice>4)
    {
        printf("Invalid operation!Please enter a valid one:\n");
        printf("1.Transpose\n2.Addition\n3.Multiplication\n4.Exit\n");
        scanf("%d",choice);
    }
    return choice;
}//MENU...

void transposedArray()
{//TRANSPOSE...
    int row, column, i, j;

    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&row, &column);

    int standardArray[row][column];

    srand(time(NULL));//With this operator function will assign numbers
                      //differently every time it starts.
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            standardArray[i][j]=1+rand()%100;//Program assigns numbers randomly from 1 to 100.
        }
    }

    printf("\n----------Standard Version Of Array----------\n\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)//Program prints every element row by row.
            {
                printf("\t%d",standardArray[i][j]);
            }
            printf("\n");
    }

    int transposedArray[column][row];//To transpose the, program, declares an array
                                     //which has reverse dimensions with the actual array.
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)//Then assign elements to reverse dimensions.
        {
            transposedArray[j][i]=standardArray[i][j];
        }
    }

    printf("\n----------Transposed Version Of Array----------\n\n");
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("\t%d",transposedArray[i][j]);
        }
        printf("\n");
    }
}//TRANSPOSE...

void additionOperator()
{//ADDITION...
    int row, column, i, j;

    printf("Enter the number of rows and columns:\n");
    scanf("%d%d",&row, &column);

    int firstArray[row][column];
    int secondArray[row][column];
    int sumOfArrays[row][column];
    srand(time(NULL));

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            firstArray[i][j]=1+rand()%100;
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            secondArray[i][j]=1+rand()%100;
        }
    }

    printf("\n----------First Array----------\n\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            {
                printf("\t%d",firstArray[i][j]);
            }
            printf("\n");
    }
    printf("\n----------Second Array----------\n\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
            {
                printf("\t%d",secondArray[i][j]);
            }
            printf("\n");
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)//Program takes the element of two array from same position
        {                    //and assigns the sum of them to equivalent position of third array.
            sumOfArrays[i][j]=firstArray[i][j]+secondArray[i][j];
        }
    }

    printf("\n----------Sum Of Matrix----------\n\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("\t%d",sumOfArrays[i][j]);
        }
        printf("\n");
    }
}//ADDITION...

void multiplicationOperator()
{//MULTIPLICATION...
    int row1, column1, row2, column2, sum=0, i, j, k;

    printf("Enter the number of rows and columns of first array:\n");
    scanf("%d%d",&row1, &column1);

    printf("Enter the number of rows and columns of first array:\n");
    scanf("%d%d",&row2, &column2);

    if(column1!=row2)//Program check if the column of first array and the row of second array is same,
    {                //if its not asks for another dimensions because otherwise operation cannot be done.
        printf("Invalid dimensions!\nPlease enter the same number to column of first array and row of second array");

        printf("Enter the number of rows and columns of first array:\n");
        scanf("%d%d",&row1, &column1);

        printf("Enter the number of rows and columns of first array:\n");
        scanf("%d%d",&row2, &column2);
    }
    int firstArray[row1][column1];
    int secondArray[row2][column2];
    int MultipliedArrays[row1][column2];
    srand(time(NULL));

    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
        {
            firstArray[i][j]=1+rand()%100;
        }
    }

    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
        {
            secondArray[i][j]=1+rand()%100;
        }
    }

    for(i=0;i<row1;i++)
    {
        for(j=0;j<column2;j++)   //Program takes the first element of first row of first array, multiplies it
        {                       //with the first element of first row of second array and adds this value to
            for(k=0;k<row2;k++)//sum and repeats this operation by increasing position and adding it to sum.
            {
                sum=sum+firstArray[i][k]*secondArray[k][j];
            }
            MultipliedArrays[i][j]=sum;//When the every element of row and column added
            sum=0;                     //assigns sum as an element of third element.
        }
    }

    printf("\n----------First Array----------\n\n");

    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
            {
                printf("\t%d",firstArray[i][j]);
            }
            printf("\n");
    }
    printf("\n----------Second Array----------\n\n");

        for(i=0;i<row2;i++)
        {
            for(j=0;j<column2;j++)
                {
                    printf("\t%d",secondArray[i][j]);
                }
                printf("\n");
        }

    printf("\n----------Multiplied Matrix----------\n\n");

        for(i=0;i<row1;i++)
        {
            for(j=0;j<column2;j++)
            {
                printf("\t%d",MultipliedArrays[i][j]);
            }
            printf("\n");
        }
}//MULTIPLICATION...
