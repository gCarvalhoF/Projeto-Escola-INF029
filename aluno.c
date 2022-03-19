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

void apagarCadastro() {}

void atualizarCadastro() {}