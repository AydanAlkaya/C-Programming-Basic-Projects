#include <stdio.h>

// dizideki sayilari buyuk mu kucuk mu diye siralayan fonksiyon

void diziSirala(int [], int, int);
void diziYaz(int [],int);
void yerDegistir(int *, int *);
void kucuktenBuyuge(int [], int);
void buyuktenKucuge(int [], int);

int main(void) {
	int a[] = {2, 4, 6, 8, 10, 1, 3, 5, 7, 0}, i, yon;
	printf("dizideki elemanlar = ");
	diziYaz(a, 10);
	printf("\n");
	printf("0. Kucukten -> Buyuge, \n1. Buyukten -> Kucuge!\nSeciminizi yapiniz ? ");
	scanf("%d",&yon);
	diziSirala(a, 10, yon);
	printf("dizideki elemanlar = ");
	diziYaz(a, 10);
	printf("\n");
	
	return 0;
}

void diziSirala(int dizi[10], int boyut, int yon){
	if (yon == 0)
		kucuktenBuyuge(dizi, boyut);
	else if (yon == 1)
		buyuktenKucuge(dizi, boyut);
	else
		printf("Yanlis parametre secimi, 0 ya da 1 olabilir, dizi degistirilmedi!\n");
}

void diziYaz(int dizi[10], int boyut){
	int i;
	for(i = 0; i < boyut; i++)
		printf("%2d ", dizi[i]);
}

void yerDegistir(int *aptr, int *bptr){
	int temp =* aptr;
	*aptr =* bptr;
	*bptr = temp;
}

void kucuktenBuyuge(int dizi[10], int boyut){
	int i, j;
	for(i = 0;i < boyut-1;i++)
		for(j = i+1; j < boyut; j++)
			if (dizi[i] > dizi[j])
			yerDegistir(&dizi[i], &dizi[j]);
}

void buyuktenKucuge(int dizi[10], int boyut){
	int i, j;
	for(i = 0; mi < boyut-1; i++)
		for(j = i+1; j < boyut; j++)
			if (dizi[i] < dizi[j])
			 yerDegistir(&dizi[i], &dizi[j]);
}
