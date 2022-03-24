#include <stdio.h>
#include <string.h>


// palindrom fonksiyonu

int main(void) {
	
	char dizgi1[20], dizgi2[20];
	int i;
	
	printf("Bosluksuz bir dizge giriniz -> ");
	scanf("%s", dizgi1);
	
	for(i = 0; dizgi1[i] != '\0'; i++)
		dizgi2[strlen(dizgi1)-i-1] = dizgi1[i];
	
	dizgi2[strlen(dizgi1)] = '\0';

	if (strcmp(dizgi1, dizgi2) == 0)
		printf("%s kelimesi palindromdur!\n\n", dizgi1);
	else
		printf("%s kelimesi palindrom degildir!\n\n", dizgi1);
	
	return 0;
}
