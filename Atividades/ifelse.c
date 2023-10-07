#include<stdio.h>
#include<locale.h>
#include<string.h>

char cod[20];

main(void){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("[A - 111 - TEC]\n[B - 112 - ANA]\n[C - 122 - GER]\n[D - 233 - DIR]\n");
	printf("Digite um dos códigos correspondentes:");
	gets(cod);
	
	if ((cod == 'A') || (cod == 'TEC') || (cod == 'a') || (cod == 'tec')){
		printf("Setor Técnico");
	}else if ((cod == 'B') || (cod == 'ANA') || (cod == 'b') || (cod == 'ana')){
		printf("Setor Analista");
	}else if ((cod == 'C') || (cod == 'GER') || (cod == 'c') || (cod == 'ger')){
		printf("Setor da Gerência");
	}else if ((cod == 'D') || (cod == 'DIR') || (cod == 'd') || (cod == 'dir')){
		printf("Setor da Diretoria");
	}
	
	return 0;
	system("pause");
}
