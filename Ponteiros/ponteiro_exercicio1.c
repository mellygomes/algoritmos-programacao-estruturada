#include <stdio.h>
#include <locale.h>

	int x = 10;
	double y = 20.50;
	char z = 'A';

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int *px = &x;
	double *py = &y;
	char *pz = &z;
	
	printf("\n\n\tEnd. x: %i - Valor x: %i\n", px, *px);
	printf("\tEnd. y: %i - Valor y: %.2f\n", py, *py);
	printf("\tEnd. z: %i - Valor z: %c\n", pz, *pz);
	
	return 0;
}
