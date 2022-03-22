#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"
#include <ctype.h>

static int matriculaAtual = 20220000;

int gerarMatricula()
{
    matriculaAtual++;
    return matriculaAtual;
}

int cadastroAluno(Pessoa lista_aluno[], int qtd_alunos)
{
    printf("-----------------------------\n");
    fflush(stdin);
    printf("Nome do aluno: ");
    fgets(lista_aluno[qtd_alunos].nome, 31, stdin);
    size_t ln = strlen(lista_aluno[qtd_alunos].nome) - 1;
    if (lista_aluno[qtd_alunos].nome[ln] == '\n')
        lista_aluno[qtd_alunos].nome[ln] = '\0';

    printf("Digite o CPF: ");
    fgets(lista_aluno[qtd_alunos].cpf, 15, stdin);
    ln = strlen(lista_aluno[qtd_alunos].cpf) - 1;
    if (lista_aluno[qtd_alunos].cpf[ln] == '\n')
        lista_aluno[qtd_alunos].cpf[ln] = '\0';
    getchar();

    lista_aluno[qtd_alunos].matricula = gerarMatricula();

    printf("Digite o sexo: ");
    scanf("%c", &lista_aluno[qtd_alunos].sexo);

    printf("Data de nascimento\n");

    printf("Dia: ");
    fflush(stdin);
    scanf("%d", &lista_aluno[qtd_alunos].dataNascimento.dia);

    printf("Mes: ");
    fflush(stdin);
    scanf("%d", &lista_aluno[qtd_alunos].dataNascimento.mes);

    printf("Ano: ");
    scanf("%d", &lista_aluno[qtd_alunos].dataNascimento.ano);
    fflush(stdin);

    qtd_alunos++;

    return qtd_alunos;
}

void listarAlunos(Pessoa lista_aluno[], int qtd_alunos)
{
    int i;

    for (i = 0; i < qtd_alunos; i++)
    {
        printf("\n-----------------------------\n");
        puts(lista_aluno[i].nome);
        printf("%d \n", lista_aluno[i].matricula);
        puts(lista_aluno[i].cpf);
        printf("%c \n", lista_aluno[i].sexo);
        printf("%02d / %02d / %4d", lista_aluno[i].dataNascimento.dia, lista_aluno[i].dataNascimento.mes, lista_aluno[i].dataNascimento.ano);
    }
}

void apagarCadastro() {

  int retorno_busca;
  int opcao;
  int apagar;

  printf("---Modulo de Exclusão de Alunos---")
  printf(" Deseja: 1- Buscar ou Aluno 2 - Sair : \n");
  scanf("%d",%opcao);
  fflush(stdin);
  
  if(opcao==1){
    retorno_busca = buscaAluno();

    if(retorno_busca!=0){
      printf("-----Dados do Aluno Encontrado-----\n");
      printf("\n-----------------------------\n");
        puts(lista_aluno[retorno_busca].nome);
        printf("%d \n", lista_aluno[retorno_busca].matricula);
        puts(lista_aluno[retorno_busca].cpf);
        printf("%c \n", lista_aluno[retorno_busca].sexo);
        printf("%02d / %02d / %4d", lista_aluno[retorno_busca].dataNascimento.dia, lista_aluno[retorno_busca].dataNascimento.mes, lista_aluno[retorno_busca].dataNascimento.ano);

      printf("/n");
      printf("Deseja excluir o registro desse(a) aluno(a)? 1- Sim ou 2- Não: ");
      scanf("%d",%apagar);
      fflush(stdin);

      if(apagar==1){
        for(i=retorno_busca,i<=, i++){
        }
      }
      
    }

    
  }
  

  
  
}

void atualizarCadastro() {}

int buscaAluno(){

  int opcao;
  int buscaMatricula;
  char buscaNome[30];

  printf("Deseja Buscar o Aluno por 1-Nome ou 2- Matricula ? : ");
  scanf(%d, &opcao);

  if(opcao==1){
    printf("Digite o nome do aluno(a): ");
    fgets(buscaNome, 31, stdin);
    size_t ln = strlen(buscaNome) - 1;
      if (buscaNome == '\n')
          buscaNome = '\0';  

    for(i=0, i<=qtd_alunos, i++){
      if(buscaNome==lista_aluno[i].nome)
        return i;
      else{
        printf("Aluno não encontrado!");
        return 0;
      }
    }
  }

  if(opcao==1){
    printf("Digite a matricula do aluno(a): ")
    scanf(%d, &buscaMatricula);
    fflush(stdin);  

    for(i=0, i<=qtd_alunos, i++){
      if(buscaMatricula==lista_aluno[i].matricula)
        return i;
      else{
        printf("Aluno não encontrado!");
        return 0;
      }
    }
  }
  }
  
}