#include <stdio.h>
#include <stdlib.h>

// Girilen sayilarin buyugunu bulan,
// 0 dan kucuk deger girildiginde sonlandirilan fonksiyon.

int main(void) {
	int buyuk = -1, sayi = 0, flag = 0;
	
	printf("Bir sayi giriniz -> ");
	scanf("%d", &sayi);
	
	while(sayi > 0)
	{
		flag = 1;
		
		if (sayi > buyuk)
			buyuk = sayi;

		printf("\nBir sayi giriniz -> ");
		scanf("%d", &sayi);
	}
		
	
	if (flag == 0)
		printf("\nHerhangi bir sayi girisi yapilmamistir.\n\n");
	else
		printf("\nSu ana kadar girilen en buyuk sayi = %d\n\n", buyuk);
			
	return 0;
}
