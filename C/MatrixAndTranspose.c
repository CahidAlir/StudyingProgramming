
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
        scanf("%d",&column);//Önce deðerleri verip sonra matrisi tanýmlamam gerektiðini farkettim
                            //tanýmlayamayýnca çöküyordu sistem
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
            for(j=0;j<column;j++)//Burada önce kafam çok karýþtý ama þuan düzelttim kanýmca
            {
                printf("Enter the number on the %d. row and %d. column\n", i+1, j+1);
                scanf("%d",&matrix[i+1][j+1]);/*Kullanýcýdan alýnan deðerlerin doðru yere gitmesi ve kullanýcýnýn da
                                                her deðerini istediði yerlere sorunsuzca yerleþtirmesi için en mantýklý yol bu galiba...*/
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
            for(l=0;l<column;l++)//Burada da sýkýntý çýkmadý tek tek deðerleri yerleþtirebiliyorum
            {
                printf("%d\t",matrix[k+1][l+1]);//Zaten üst tarafýn neredeyse aynýsý
            }
            printf("\n\n");
        }
    }

void printTranspose(int row, int column, int matrix[row][column])
    {
        int m, n;
        int transpose[row][column];

        printf("\n ---------------The Transpose---------------\n");/**Burada þöyle bir sorun var; sadece matrisin adreslerini caprazlamak yetmiyor
                                                                      for döngüsü kafayý yiyor...*/
        for(m=0;m<row;m++)
        {
            for(n=0;n<column;n++)
                transpose[n+1][m+1]=matrix[m+1][n+1];//Burada matrix'i tanýmlayýp transpose'un ögelerinin matrix'inkilerin
        }                                            //konumun çaprazlanmýþ hali olduðunu belirtiyoruz
        for(m=0;m<column;m++)
        {
            for(n=0;n<row;n++)
            {
                printf("%d\t",transpose[m+1][n+1]);//burada da transpose'a tersten yerleştiriyoruz.
            }
            printf("\n\n");/**Burada interenetten feyz aldým ama katiyyen kopyala yapýþtýr deðil.*/
        }
    }
