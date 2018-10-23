/**
Author: @Cahid
*/

#include <stdio.h>

int createMatrix();
void printMatrix();
void printTranspose();

int main()
{
    int row, column;

        printf("Enter the number of rows:\n");
        scanf("%d",&row);
        printf("Enter the number of column:\n");
        scanf("%d",&column);//�nce de�erleri verip sonra matrisi tan�mlamam gerekti�ini farkettim
                            //tan�mlayamay�nca ��k�yordu sistem
    int matrix[row][column];
    createMatrix(row, column, matrix);
    printMatrix(row, column, matrix);
    printTranspose(row, column, matrix);

    return 0;
}

int createMatrix(int row, int column, int matrix[row][column])
    {
        int i, j;

        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)//Burada �nce kafam �ok kar��t� ama �uan d�zelttim kan�mca
            {
                printf("Enter the number on the %d. row and %d. column\n", i+1, j+1);
                scanf("%d",&matrix[i+1][j+1]);/*Kullan�c�dan al�nan de�erlerin do�ru yere gitmesi ve kullan�c�n�n da
                                                her de�erini istedi�i yerlere sorunsuzca yerle�tirmesi i�in en mant�kl� yol bu galiba...*/
            }
        }
        return matrix[row][column];
    }

void printMatrix(int row, int column, int matrix[row][column])
    {
        int k, l;

        printf("\n ---------------Matrix--------------- \n");

        for(k=0;k<row;k++)
        {
            for(l=0;l<column;l++)//Burada da s�k�nt� ��kmad� tek tek de�erleri yerle�tirebiliyorum
            {
                printf("%d\t",matrix[k+1][l+1]);//Zaten �st taraf�n neredeyse ayn�s�
            }
            printf("\n\n");
        }
    }

void printTranspose(int row, int column, int matrix[row][column])
    {
        int m, n;
        int transpose[row][column];

        printf("\n ---------------The Transpose---------------\n");/**Burada ��yle bir sorun var; sadece matrisin adreslerini caprazlamak yetmiyor
                                                                      for d�ng�s� kafay� yiyor...*/
        for(m=0;m<row;m++)
        {
            for(n=0;n<column;n++)
                transpose[n+1][m+1]=matrix[m+1][n+1];//Burada matrix'i tan�mlay�p transpose'un �gelerinin matrix'inkilerin
        }                                            //konumun �aprazlanm�� hali oldu�unu belirtiyoruz
        for(m=0;m<column;m++)
        {
            for(n=0;n<row;n++)
            {
                printf("%d\t",transpose[m+1][n+1]);//burada da transpose'a tersten sapl�yoruz
            }
            printf("\n\n");/**Burada interenetten feyz ald�m ama katiyyen kopyala yap��t�r de�il.*/
        }
    }
