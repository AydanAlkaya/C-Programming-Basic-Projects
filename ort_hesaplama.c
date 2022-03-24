#include <stdio.h>
#include <stdlib.h>

// ortalama hesaplayan fonksiyon

int main(void) {
	
	int i, sayi, toplam = 0;
	float ortalama;
	
	for(i = 1; i <= 5; i++){
		
		printf("%d. sayiyi giriniz -> ", i);
		scanf("%d", &sayi);
		
		if (sayi < 0){
			
			printf("Sifir ya da pozitif bir sayi girmelisiniz!\n\n");
			i--;
			continue;
		}
		
		else if (sayi == 0) 
		 	break;
		else
			toplam += sayi;
	}
	
	ortalama = (float)toplam/(i-1);
	
	printf("Ortalama = %f dir.\n", ortalama);
	
	return 0;
}
