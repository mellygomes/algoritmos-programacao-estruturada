

``` portugol

Algoritmo "sistema_de_viagens"

Var

   valor1, valor2, valor3, valor4, valor5, total, valor_individual: real
   n_pessoas: inteiro
   cidade1, cidade2, cidade3, cidade4, cidade5, opcao, destino: caractere

Inicio

   escreval("            ========== Bem Vindos! ============")
   escreval
   
   //inicio da gravação dos dados

   escreva ("Digite o número de pessoas que irão viajar: ")
   leia(n_pessoas)
   escreval

   escreva("Opções disponíveis: ")
   escreval

   escreval("( A ) São Paulo - R$ 700,00")
   valor1 <- 700
   cidade1 <- "São Paulo"

   escreval("( B ) Curitiba - R$ 1000,00")
   valor2 <- 1000
   cidade2 <- "Curitiba"

   escreval("( C ) Brasília - R$ 300,00")
   valor3 <- 300
   cidade3 <- "Brasília"

   escreval("( D ) Recife - 800,00")
   valor4 <- 800
   cidade4 <- "Recife"

   escreval("( E ) Rio de Janeiro - 700,00")
   valor5 <- 700
   cidade5 <- "Rio de Janeiro"
   
   escreval
   
   //inicio de modulo "escolha" para seleção do destino

   escreval("Digita letra que corresponde a opção que deseja: ")
   leia(opcao)

   escolha (opcao)
   caso "A", "a"
      total <- valor1 * n_pessoas
      destino <- cidade1
   caso "B", "b"
      total <- valor2 * n_pessoas
      destino <- cidade2
   caso "C", "c"
      total <- valor3 * n_pessoas
      destino <- cidade3
   caso "D", "d"
      total <- valor4 * n_pessoas
      destino <- cidade4
   caso "E", "e"
      total <- valor5 * n_pessoas
      destino <- cidade5
   fimescolha
   
   //fim do "escolha"

   valor_individual <- total / n_pessoas

   limpatela
   
   // fim da gravação e inicio da imoressão dos dados
   
   escreva

   escreval("Quantidade de passagens: ", n_pessoas)
   escreval("Destino: ", destino)
   escreval("Valor por pessoa (ida e volta): R$",valor_individual)
   escreva("Total à pagar: R$ (ida e volta)", total)
   escreval
   
   //fim da imoressão

Fimalgoritmo

```