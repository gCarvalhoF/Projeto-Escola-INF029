#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"
#include <ctype.h>

void inserirAlunoNaLista(Pessoa **inicio, Pessoa *novoAluno)
{
    Pessoa *atual;

    if (*inicio == NULL)
    {
        *inicio = novoAluno;
    }
    else
    {
        atual = *inicio;

        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novoAluno;
    }

    novoAluno->prox = NULL;
}

void cadastroAluno(Pessoa **inicio)
{
    int i, j;
    char continuar;
    Pessoa *novoAluno = (Pessoa *)malloc(sizeof(Pessoa));

    printf("-----------------------------\n");
    printf("Nome do aluno: ");
    fgets(novoAluno->nome, 31, stdin);
    size_t ln = strlen(novoAluno->nome) - 1;
    if (novoAluno->nome[ln] == '\n')
        novoAluno->nome[ln] = '\0';
    fflush(stdin);

    printf("Digite o CPF: ");
    fgets(novoAluno->cpf, 14, stdin);
    ln = strlen(novoAluno->cpf) - 1;
    if (novoAluno->cpf[ln] == '\n')
        novoAluno->cpf[ln] = '\0';
    fflush(stdin);

    printf("Matrícula do aluno: ");
    fgets(novoAluno->matricula, 14, stdin);
    ln = strlen(novoAluno->matricula) - 1;
    if (novoAluno->matricula[ln] == '\n')
        novoAluno->matricula[ln] = '\0';
    fflush(stdin);

    printf("Digite o sexo: ");
    scanf("%c", &novoAluno->sexo);
    fflush(stdin);

    printf("Data de nascimento\n");

    printf("Dia: ");
    scanf("%d", &novoAluno->dataNascimento.dia);
    fflush(stdin);

    printf("Mes: ");
    scanf("%d", &novoAluno->dataNascimento.mes);
    fflush(stdin);

    printf("Ano: ");
    scanf("%d", &novoAluno->dataNascimento.ano);
    fflush(stdin);

    inserirAlunoNaLista(inicio, novoAluno);
}

void listarAlunos(Pessoa **inicio)
{
    Pessoa *atual = *inicio;
    while (atual != NULL)
    {
        printf("\n-----------------------------\n");
        puts(atual->nome);
        puts(atual->matricula);
        puts(atual->cpf);
        printf("%c \n", atual->sexo);
        printf("%02d / %02d / %4d", atual->dataNascimento.dia, atual->dataNascimento.mes, atual->dataNascimento.ano);

        atual = atual->prox;
    }
}

void apagarCadastro() {}

void atualizarCadastro() {}