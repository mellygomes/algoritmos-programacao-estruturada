#include <stdio.h>

	void outra(void);
	void outra2(void);

	int x = 5;

int main (void) {
	printf("\nEm main( ) x = %d",x);
	outra();
	outra2();
}


void outra(void) {
	int x = 10;
	printf("\nEm outra( ) x = %d", x);
}

void outra2(void) {
	int x = 20;
	printf("\nEm outras2 ( ) x = %d", x);
	
}
