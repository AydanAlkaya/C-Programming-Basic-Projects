#include <stdio.h>
#include <conio.h>

// pencere cizdiren fonksiyon

void pencereCiz(int, int, char);

int main(void){
	int y, g;
	char c;
	printf("Pencerenin yuksekligini ve genisligini giriniz -> ");
	scanf("%d%d", &y, &g);
	printf("Cizim karakterini giriniz -> ");
	c = getch();
	printf("%c", c);
	pencereCiz(y, g, c);

	return 0;
}

void pencereCiz(int y, int g, char c){
	int i, j;
	printf("\n");
	
	for(i = 1; i <= g; i++)
		printf("%c", c);
		printf("\n");
		
	for(i = 1; i <= y-2; i++){
		printf("%c", c);
	
		for(j = 1; j <= g-2; j++)
		printf(" ");
		printf("%c\n", c);
	}
	for(i = 1; i <= g; i++)
		printf("%c", c);
		printf("\n");
}
