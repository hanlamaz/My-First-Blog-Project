#include <stdio.h>
#include <stdlib.h>
int main()
{
	char icerik[50]; // UZUNLUK - ISTEGE BAGLI G�R�LMEYEB�L�R
	FILE *dosya; // DOSYAYI POINTERE ATAR
	dosya = fopen("deneme.txt", "w"); // DENEME.TXT ADLI DOSYAYI OLU�TURUR
	fprintf(dosya, "Hello World , its my first txt job !\n");
	fputs("Its fputs type\n", dosya);
	fclose(dosya); // DOSYAYI KAPAR
	dosya = fopen("deneme.txt", "r");
	
	/*while (fgets(icerik, 50, dosya) != NULL) // YAZI ��ER���N�N SONUNA KADAR G�DER
	{
		fputs(icerik, stdout); // STDOUT �LE DENEME.TXT DEK� T�M ��ER��� G�STER�R
	}*/
	
	while (!feof(dosya))    // YAZI ��ER���N�N SONUNA KADAR
	{
		if (fgets(icerik, 50, dosya))		printf("%s", icerik); // ICERI�I YAZDIRIR
	}


	system("PAUSE");
}