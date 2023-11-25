#include <stdio.h>
#include <locale.h>

int x = 10;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int *ponteiro;
	ponteiro = &x;
	
	printf("\n\n%i\n", *ponteiro);
	
	return 0;
}
