#include <stdio.h>
#include <time.h>


// random bilgisayarin tuttugu sayiyi tahmin etme

int degerlendir(int, int);

int main(void) {
	
	srand(time(NULL));
	int sayi = 100+(rand()%900), hak = 15, i,  bildi = 0, girilen;
	
	for(i = 1; i <= hak && bildi == 0; i++){
		printf("Lutfen %d. hakkinizi giriniz -> ", i);
		scanf("%d", &girilen);
		bildi = degerlendir(sayi, girilen);
	}
	
	if (bildi == 0)
		printf("Maalesef bilemediniz, sayi %d idi!\n", sayi);
	else
		printf("Tebrikler, %d sayisini %d hakta bildiniz.\n", sayi, i-1);	

   return 0;
}

int degerlendir(int sayi, int girilen){
	int bildi = 0;
	if (girilen < sayi)
		printf("Girdiginiz sayi kucuktur!\n\n");
	else if (girilen > sayi)
		printf("Girdiginiz sayi buyuktur!\n\n");
	else
		bildi = 1;
		
	return bildi;
}
