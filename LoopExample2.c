/**
@author Cahid

Nested looplar ile alakalý çalýþma..
*/

#include <stdio.h>

void exampleLoop();
void exampleLoop3_saidSol();

int main()
{
   // exampleLoop();
   // exampleLoop2();
   //exampleLoop3();
	exampleLoop3_saidSol();
    return 0;
}

void exampleLoop()
{
    int i, j;
    for(i=1; i<6; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void exampleLoop2 ()
{
    int i, j;
    for(i=6; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
           printf("*") ;
        }
        printf("\n");
    }
}

void exampleLoop3 ()
{
    int space, star, newLine;
    for(newLine=1; newLine<5; newLine++)
    {
        for(star=0; star<newLine; star++)
        {
            for(space=5; space>newLine>star ; space--)
            {
                printf(" ");
            }
           printf("*");
        }
     printf("\n");
    }

}

void exampleLoop3_saidSol()
{

	//Daha basit bir yaklaşım ile yaklaşcam...
	int star, nLine, space;

	for(nLine = 1; nLine<=5; nLine++) //Döngü her çalıştığında bir satır atlayacak...
	{
		for(space=5; space>nLine; space--) //İlk turda 4 sonra 3,2,1 şeklinde boşluk versin istiyorum.. Aynı zamanda 5. satıra
		{								   //geldiğinde space = 4 ve nLine = 5 olduğu için koşul false olduğundan dolayı
			printf(" ");				   //bu döngüye hiç girmeyecek...
		}

		for(star = 1; star<=nLine; star++) //İlk turda 1 sonra 2.3.4 ve en son satırda 5 tane yıldız bassın..
		{
			printf("*");
		}

		printf("\n");
	}
}
