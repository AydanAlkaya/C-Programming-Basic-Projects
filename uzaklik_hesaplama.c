#include <stdio.h>
#include <math.h>

// x ve y koordinat sisteminde bulunan sectigimiz iki noktanin uzakliklarini
// hesaplayan fonksiyon

struct nokta{float x;float y;};
typedef struct nokta NOKTA;

float uzaklikHesapla(NOKTA *);

int main(void) {

	NOKTA p[2];

	printf("p1 noktasinin x ve y koordinatlarini giriniz -> ");
	scanf("%f%f", &p[0].x, &p[0].y);

	printf("\np2 noktasinin x ve y koordinatlarini giriniz -> ");
	scanf("%f%f", &p[1].x, &p[1].y);

	printf("\np1(%.2f,%.2f) noktasi ile p2(%.2f,%.2f) noktasi arasindaki ", p[0].x, p[0].y, p[1].x, p[1].y);
	
	printf("uzaklik = %.2f\'dir.\n\n", uzaklikHesapla(&p));
	
	return 0;
}

float uzaklikHesapla(NOKTA *ptr){
	
	return(sqrt(pow((ptr->x-(ptr+1)->x), 2.0)+pow((ptr->y-(ptr+1)->y), 2.0)));
	
	}

