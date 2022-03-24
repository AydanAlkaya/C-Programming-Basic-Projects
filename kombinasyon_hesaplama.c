#include <stdio.h>

// kombinasyon hesaplayan fonksiyon

int faktoriyel(int n){
	int i, f = 1;
	for(i = 2;i <= n;i++)
		f *= i;
	return(f);
}

int kombinasyon(int n, int r){
	return(faktoriyel(n)/(faktoriyel(n-r)*faktoriyel(r)));
}

int main(void){
	int n, r;
	printf("Kacin kacli kombinasyonu hesaplanacak -> ");
	scanf("%d%d", &n, &r);
	printf("\nC (%2d,%2d) = %3d \'dir.\n\n", n, r, kombinasyon(n, r));

	return 0;
}
