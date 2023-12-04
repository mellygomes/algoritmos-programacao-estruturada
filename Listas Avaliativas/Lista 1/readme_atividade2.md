``` portugol

Algoritmo "sistema_notas_escolares"

Var

   nota1, nota2, media: vetor[1..20] de real
   n_alunos, i: inteiro
   nome: vetor[1..30] de caractere

Inicio

   escreval("             ========== SISTEMA DE NOTAS =========")
   escreval
   
   //inicio da gravação dos dados

   escreval("Quantos alunos gostaria de cadastrar?")
   leia(n_alunos)
   escreval

   para i de 1 ate n_alunos faca

      escreval ("Cadastro Nº ", i)
      escreval

      escreva ("Nome do aluno(a): ")
      leia(nome[i])
      escreval

      escreva ("1º Nota: ")
      leia(nota1[i])
      escreval

      escreva ("2º Nota: ")
      leia(nota2[i])
      escreval

      limpatela

   fimpara
   
   //fim da gravação dos dados
   
   //inicio da impressão dos dados

   para i de 1 ate n_alunos faca

      media[i] <- (nota1[i] + nota2[i]) / 2

      escreval ("CADASTRO", i)
      escreval

      escreval("Aluno(a): ", nome[i])
      escreval("1º Nota: ", nota1[i])
      escreval("2º Nota: ", nota2[i])
      
      //inicio de modulo "se" para verificação de aprovação

      se ((media[i] >= 7) e (media[i] <= 10)) entao
         escreval ("Resultado final: Aprovado")
      senao
         se ((media[i] < 7) e (media[i] >= 0)) entao
            escreval ("Resultado final: Reprovado")

         senao ((media[i] < 0) ou (media[i] > 10)) entao
            escreval("Valores inválidos foram inseridos nas notas")
         fimse
      fimse
      
      //fim de modulo "se"

      escreval("-------------------------------------------------------")
      escreval

   fimpara
   
   //fim da impressão dos dados

Fimalgoritmo

```