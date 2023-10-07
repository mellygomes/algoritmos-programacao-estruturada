#include<stdio.h>
#include<locale.h>

char prod1[30], prod2[30], prod3[30];
float v1, v2, v3, total;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	//impressão
	
	printf("PEDIDO:\n");
	
	printf("1° Lanche: ");
	gets(prod1);
	fflush(stdin);
	
	printf("Valor: ");
	scanf("%f", &v1);
	fflush(stdin);
	
    printf("\n");
	
	printf("2° Lanche: ");
	gets(prod2);
	fflush(stdin);
	
	printf("Valor: ");
	scanf("%f", &v2);
	fflush(stdin);
	
	printf("\n");
	
	printf("3° Lanche: ");
	gets(prod3);
	fflush(stdin);
	
	printf("Valor: ");
	scanf("%f", &v3);
	fflush(stdin);
	
	total = v1 + v2 + v3;
	
	system("cls");
	
	printf("Pedidos feitos:\n");
	printf("\n");
	printf("%s: %.2f\n", prod1, v1);
	printf("%s: %.2f\n", prod2, v2);
	printf("%s: %.2f\n", prod3, v3);
	printf("Valor total a pagar: %.2f\n", total);
}
