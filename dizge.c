#include <stdio.h>

// girilen sozcugun kac tane harf icerdigini yazdiran fonksiyon

int main(void) {
	char dizgi[20];
	int i;
	
	printf("Bosluksuz bir dizge giriniz ->");
	scanf("%s",dizgi);
	
	for(i = 0; dizgi[i] != '\0'; i++);
		printf("\n%s dizgesinde %d adet karakter bulunmaktadir.\n\n", dizgi, i);
	
	return 0;
}
