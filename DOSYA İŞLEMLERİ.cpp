#include <stdio.h>
#include <stdlib.h>
int main()
{
	char icerik[50]; // UZUNLUK - ISTEGE BAGLI GÝRÝLMEYEBÝLÝR
	FILE *dosya; // DOSYAYI POINTERE ATAR
	dosya = fopen("deneme.txt", "w"); // DENEME.TXT ADLI DOSYAYI OLUÞTURUR
	fprintf(dosya, "Hello World , its my first txt job !\n");
	fputs("Its fputs type\n", dosya);
	fclose(dosya); // DOSYAYI KAPAR
	dosya = fopen("deneme.txt", "r");
	
	/*while (fgets(icerik, 50, dosya) != NULL) // YAZI ÝÇERÝÐÝNÝN SONUNA KADAR GÝDER
	{
		fputs(icerik, stdout); // STDOUT ÝLE DENEME.TXT DEKÝ TÜM ÝÇERÝÐÝ GÖSTERÝR
	}*/
	
	while (!feof(dosya))    // YAZI ÝÇERÝÐÝNÝN SONUNA KADAR
	{
		if (fgets(icerik, 50, dosya))		printf("%s", icerik); // ICERIÐI YAZDIRIR
	}


	system("PAUSE");
}