#include <stdio.h>
#include <locale.h>
//criando a STRUCT com os tipos de registros

struct retangulo {
int comprimento;
int largura;
};

//fun��o para calcular a �rea do ret�ngulo
int area(struct retangulo r) {
return r.comprimento * r.largura;
}

//iniciando o programa
int main() {
setlocale(LC_ALL,"Portuguese");

//criando uma vari�vel do tipo "retangulo" para armazenar as dimens�es do ret�ngulo
struct retangulo r;
printf("Digite o comprimento do lote: ");
scanf("%d", &r.comprimento);
printf("Digite a largura do lote: ");
scanf("%d", &r.largura);

//calculando a �rea do ret�ngulo usando a fun��o "area"
int area_retangulo = area(r);

//exibindo a �rea do ret�ngulo na tela
printf("\n�rea do lote: %d metros\n", area_retangulo);
return 0;
}

/*
Atividades: 3� - Criar um programa que:
- cadastre 3 pontos tur�sticos;
- cadastre 3 clientes;
- pe�a para cada cliente escolher 1 ponto tur�stico;
- limpe a tela e mostre os resultados.
Utilizando STRUCT e FUN��ES
(1 semana)
*/
