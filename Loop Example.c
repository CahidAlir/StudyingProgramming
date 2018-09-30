/**
@author Said

Loopları anlatan basit bir example
*/

#include <stdio.h>
void forLoop();
void whileLoop();
void doWhileloop();

int main(void)
{
	//3 çeşit döngü (loop) türü var...
	//Bunların 3'ü de hemen hemen aynı işi yapar ancak duruma göre farklılık gösterir..
	//3 farklı fonksiyonda bu 3 loop'u incelemeni istiyorum..

	forLoop();
	printf("\n\n\nPress any key to continue...");
	getchar();//Bu getcharların ne yaptığını bilmene gerek yok.. haddini bil yeter aslanım.
	whileLoop();
	printf("\n\n\nPress any key to continue...\n");
	doWhileloop();
	printf("\n\nThat's the end of the course.. Good Bye!\n");

	return 0;
}
/**
For döngüsünü anlatan fonksiyon.. Burada benim yaptığım gibi her zaman
Koduna düzgün açıklamalar girmeyi ihmal etme!...
*/
void forLoop()
{
	//for loop şöyle çalışıyor
	int counter; //adı üzerinde sayaç

	for(counter = 0; counter < 10; counter++)
	{
		printf("%d\n", counter+1);
		//Sırasıyla 1,2,3,... 10 yazmasını bekliyorum..
	}
	//Burada olay önce bir sayaç deklare edersin
	//Sonra sayacın çıkacağı condition'ı belirtirsin
	//Sonra da sayacın her döngüde nasıl itere edileceliğini yazarsın
	//Sayacı her döngüde n defa arttırabilir ancak azaltabilirsin
	//DİKKAT.. sayacı arttırır/azaltırken condition'ı false yapacak değere gideceğinden emin ol..
	//Özetle for(sayacın başlayacağı nokta; koşul; sayacı arttırma/azaltma)
	//DİKKAT.. Koşul doğru olduğu sürece döngü çalışır.. Eğer koşul hep doğru olursa
	//buna runtime error olan infinite loop denir ve alınacak en aptal sonuçlardan biridir...
	//NOT: 1 arttırırken counter++, bir azaltırken counter-- yazabilirsin..

  /*
    Aynısının laciverti
	counter = 0;
	while (counter < 10)
    {
        printf("%d", counter+1);
        counter++;
    }
*/
}

void whileLoop()
{
	int option = 0;
	//Bu döngü çeşiti daha çok döngünün kaç defa değil de hangi koşulda çıkması gerektiğini
	//biliyorsan kullanman gereken bir döngü çeşidi..
	//while'ın içinde yazılı olan işlem n defa döner.. N sayısını kullanıcı ya da başka bir işlem
	//belirleyebilir..
	while(option != -1)
	{
		printf("Çıkmak için -1'e bas.. Onun dışında hep bu yazı gelecek!!\n" );
		scanf("%d",&option);
	}
}

void doWhileloop()
{
	getchar();
	int option = -1;
	do
	{
		//Do while loop while loop'a çok ama çok benzer.. tek farkı
		//Do while loop'da işlem EN AZ 1 defa koşula BAKMAKSIZIN YAPILIR!...
		//Daha sonra koşul doğru olduğu sürece yapmaya devam eder!...
		//Mesela option -1 olarak init. edilmiş olmasına rağmen kod bu kısmı çalıştıracak!
		printf("-1 yazana kadar bu yazı ekrana basılacak\n");
		scanf("%d",&option);
	} while (option != -1); //Sondaki ; işaretini unutma!!!
}
