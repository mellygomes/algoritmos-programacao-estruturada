#include <stdio.h>
#include <locale.h>
//criando a STRUCT com os tipos de registros

struct retangulo {
int comprimento;
int largura;
};

//função para calcular a área do retângulo
int area(struct retangulo r) {
return r.comprimento * r.largura;
}

//iniciando o programa
int main() {
setlocale(LC_ALL,"Portuguese");

//criando uma variável do tipo "retangulo" para armazenar as dimensões do retângulo
struct retangulo r;
printf("Digite o comprimento do lote: ");
scanf("%d", &r.comprimento);
printf("Digite a largura do lote: ");
scanf("%d", &r.largura);

//calculando a área do retângulo usando a função "area"
int area_retangulo = area(r);

//exibindo a área do retângulo na tela
printf("\nÁrea do lote: %d metros\n", area_retangulo);
return 0;
}

/*
Atividades: 3º - Criar um programa que:
- cadastre 3 pontos turísticos;
- cadastre 3 clientes;
- peça para cada cliente escolher 1 ponto turístico;
- limpe a tela e mostre os resultados.
Utilizando STRUCT e FUNÇÕES
(1 semana)
*/
