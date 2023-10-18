#include <stdio.h>

	float converter(float tempFar); //prototipo

int main() {
	
	printf("\n\n");
	
	float tempFar, tempCel;
	printf("Temp.em Fahrenheit: ");
	scanf("%f", &tempFar);
	tempCel = converter(tempFar);
	printf("Em celcios %.0f", tempCel);
	
	printf("\n\n");
	return 0;
}

	float converter(float tempFar) {
		float tempCel;
		tempCel = ((tempFar-32)*5) / 9;
		return tempCel;
	}
