``` portugol

Algoritmo "empresa_privada"

Var

   i, t: inteiro
   confirma: caractere
   matricula: vetor[0..50] de inteiro
   setor_selected, opcao_ad_familiar: vetor[0..50] de caractere
   nome, email, cargo, setor,tel, cpf: vetor[0..50] de caractere
   salario, vale_trans, vale_ref, total_sal: vetor[0..50] de real

Inicio

   escreval("=============== CADASTRO DE FUNCIONÁRIO ==================")
   escreval

   t <- 0
   confirma <- "S", "s"

   escreval("Deseja cadastrar um funcionário? (S - Sim)(Outro - Não)")
   leia(confirma)
   escreval
   
   enquanto ((confirma = "S") ou (confirma = "s")) faca

      //gavação dos dados

      escreval("DADOS PESSOAIS: ")
      escreval

      escreva("Nome: ")
      leia(nome[t])
      escreval

      escreva("Nº de matricula: ")
      leia(matricula[t])
      escreval

      escreva("Telefone: ")
      leia(tel[t])
      escreval

      escreva("E-mail: ")
      leia(email[t])
      escreval

      escreva("CPF: ")
      leia(cpf[t])

      limpatela

      escreval("DADOS DO CONTRATO")
      escreval

      escreva("Cargo: ")
      leia(cargo[t])
      escreval

      //inicio de modulo "escolha" para seleção do setor

      escreval("Selecione a opção referente ao setor: ")
      escreval

      escreval("[A] - Administrativo")
      escreval("[B] - Financeiro")
      escreval("[C] - TI")
      escreval("[D] - Publicitário")

      escreva("Setor: ")
      leia(setor[t])
      escreval

      //obs: a variável receberá o resultado refente a opção
      //selecionada para a posterior impressão dos dados

      escolha (setor[t])
      caso "M", "N", "a"
         setor_selected[t] <- "Administrativo"

      caso "B", "b"
         setor_selected[t] <- "Financeiro"

      caso "C", "c"
         setor_selected[t] <- "TI"

      caso "D", "d"
         setor_selected[t] <- "Publicitário"
      fimescolha

      //fim de modulo "escolha" para seleção do setor

      limpatela

      escreva("Salário: ")
      leia(salario[t])
      escreval

      escreva("Adicional do vale refeição: ")
      leia(vale_ref[t])
      escreval

      escreva("Adicional do vale trasporte: ")
      leia(vale_trans[t])
      escreval

      escreva("Funcionário possui Filhos?(S - Sim)(N - Não)")
      leia(opcao_ad_familiar[t])
      escreval

      //inicio de modulo "se" para adicional salarial

      se ((opcao_ad_familiar[t] = "S") ou (opcao_ad_familiar[t] = "s")) entao

         total_sal[t] <- total_sal[t] + salario[t] + vale_ref[t] + vale_trans[t] + 125
      senao

         total_sal[t] <- total_sal[t] + salario[t] + vale_ref[t] + vale_trans[t]

      fimse

      //fim de modulo de "se" para adicional salarial

      //fim da gravação dos dados

      escreval("Deseja cadastrar mais um funcionário? (S - Sim)(Outro - Não)")
      leia(confirma)

      t <- t + 1

      limpatela

   fimenquanto

   //início da impressão dos dados

   escreval("DADOS CADASTRADOS: ")
   escreval

   para i de 0 ate t - 1 faca

      escreval("Nome: ", nome[i])
      escreval("Nº de Matricula: ", matricula[i])
      escreval("Telefone: ", tel[i])
      escreval("E-mail: ", email[i])
      escreval("CPF: ", cpf[i])
      escreval("Cago: ", cargo[i])
      escreval("Setor: ", setor_selected[i])

      //inicio de modulo "se" para possivel impressão de adicional

      se ((opcao_ad_familiar[i] = "S") ou (opcao_ad_familiar[i] = "s")) entao

         escreval("Benefício familiar de R$ 125,00: Sim.")

      senao

         escreval("Benefício familiar de R$ 125,00: Não.")

      fimse

      //fim de modulo "se" para possivel impressão de adicional

      escreval("Salário: R$ ", total_sal[i])
      escreval("Adicional de transporte: R$ ", vale_trans[i])
      escreval("Adicional de refeição: R$ ", vale_ref[i])
      escreval("-------------------------------------------------------")
      escreval

   fimpara

   //fim da impressão dos dados

Fimalgoritmo

```