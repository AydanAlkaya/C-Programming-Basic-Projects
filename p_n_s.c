#include <stdio.h>
#include <stdlib.h>

// 1 den 10 a kadar girilen sayilarin negatif mi pozitif mi sifir mi oldugunu
// Gosteren fonksiyon

int main(void) {

	int sayac, p = 0, s = 0, n = 0, sayi;
	
	for(sayac = 1; sayac <= 10; sayac++){
		
		printf("\n%2d. sayiyi giriniz -> ", sayac);
		scanf("%d", &sayi);
		
		if (sayi < 0)
			n++;
		else if (sayi == 0)
			s++;
		else
			p++;
	}
	printf("\n%d negatif, %d sifir ve %d pozitif sayi girdiniz.\n\n", n, s, p);

	return 0;
	
}