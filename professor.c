#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"
#include <ctype.h>

static int matriculaAtual = 100;

int gerarMatricula()
{
    matriculaAtual++;
    return matriculaAtual;
}

int cadastroAluno(Pessoa lista_professor[], int qtd_professores)
{
    printf("-----------------------------\n");
    fflush(stdin);
    printf("Nome do professor: ");
    fgets(lista_professor[qtd_professores].nome, 31, stdin);
    size_t ln = strlen(lista_professor[qtd_professores].nome) - 1;
    if (lista_professor[qtd_professores].nome[ln] == '\n')
        lista_professor[qtd_professores].nome[ln] = '\0';

    printf("Digite o CPF: ");
    fgets(lista_professor[qtd_professores].cpf, 15, stdin);
    ln = strlen(lista_professor[qtd_professores].cpf) - 1;
    if (lista_professor[qtd_professores].cpf[ln] == '\n')
        lista_professor[qtd_professores].cpf[ln] = '\0';
    getchar();

    lista_professor[qtd_professores].matricula = gerarMatricula();

    printf("Digite o sexo: ");
    scanf("%c", &lista_professor[qtd_professores].sexo);

    printf("Data de nascimento\n");

    printf("Dia: ");
    fflush(stdin);
    scanf("%d", &lista_professor[qtd_professores].dataNascimento.dia);

    printf("Mes: ");
    fflush(stdin);
    scanf("%d", &lista_professor[qtd_professores].dataNascimento.mes);

    printf("Ano: ");
    scanf("%d", &lista_professor[qtd_professores].dataNascimento.ano);
    fflush(stdin);

    qtd_professores++;

    return qtd_professores;
}

void listarProfessores(Pessoa lista_professor[], int qtd_professores)
{
    int i;

    for (i = 0; i < qtd_professores; i++)
    {
        printf("\n-----------------------------\n");
        puts(lista_professor[i].nome);
        printf("%d \n", lista_professor[i].matricula);
        puts(lista_professor[i].cpf);
        printf("%c \n", lista_professor[i].sexo);
        printf("%02d / %02d / %4d", lista_professor[i].dataNascimento.dia, lista_professor[i].dataNascimento.mes, lista_professor[i].dataNascimento.ano);
    }
}

void listarProfessorSexo(Pessoa lista_professor[], int qtd_professores){
  int opcao;
  int i;
  
  size_t n = sizeof(lista_professor->nome);

  printf("Deseja Lista os Professores do sexo 1- Masculino ou 2- Feminino? ");
  scanf("%d",&opcao);

  
  if(opcao==1){
    for(i=0; i<=n; i++){
      if(lista_professor[i].sexo=='M'){
        printf("\n-----------------------------\n");
        puts(lista_professor[i].nome);
        printf("%d \n", lista_professor[i].matricula);
        puts(lista_professor[i].cpf);
        printf("%c \n", lista_professor[i].sexo);
        printf("%02d / %02d / %4d", lista_professor[i].dataNascimento.dia, lista_professor[i].dataNascimento.mes, lista_professor[i].dataNascimento.ano);       
      }
    }

  }else if(opcao==2){
    for(i=0; i<=n; i++){
      if(lista_professor[i].sexo=='F'){
        printf("\n-----------------------------\n");
        puts(lista_professor[i].nome);
        printf("%d \n", lista_professor[i].matricula);
        puts(lista_professor[i].cpf);
        printf("%c \n", lista_professor[i].sexo);
        printf("%02d / %02d / %4d", lista_professor[i].dataNascimento.dia, lista_professor[i].dataNascimento.mes, lista_professor[i].dataNascimento.ano);       
      }
    }    
  }else{
    printf("Opção Incorreta!");
  }

  
}


void apagarCadastro() {}

void atualizarCadastro() {}