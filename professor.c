#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "structs.h"
#include <ctype.h>

void inserirProfessorNaLista(Pessoa **inicio, Pessoa *novoAluno)
{
    Pessoa *atual;

    if (*inicio == NULL)
    {
        *inicio = novoProfessor;
    }
    else
    {
        atual = *inicio;

        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novoProfessor;
    }

    novoProfessor->prox = NULL;
}

void cadastroProfessor(Pessoa **inicio)
{
    int i, j;
    char continuar;
    Pessoa *novoProfessor = (Pessoa *)malloc(sizeof(Pessoa));

    printf("-----------------------------\n");
    printf("Nome do professor: ");
    fgets(novoProfessor->nome, 31, stdin);
    size_t ln = strlen(novoProfessor->nome) - 1;
    if (novoProfessor->nome[ln] == '\n')
        novoProfessor->nome[ln] = '\0';
    fflush(stdin);

    printf("Digite o CPF: ");
    fgets(novoProfessor->cpf, 14, stdin);
    ln = strlen(novoProfessor->cpf) - 1;
    if (novoProfessor->cpf[ln] == '\n')
        novoProfessor->cpf[ln] = '\0';
    fflush(stdin);

    printf("Matrícula do professor: ");
    fgets(novoProfessor->matricula, 14, stdin);
    ln = strlen(novoProfessor->matricula) - 1;
    if (novoProfessor->matricula[ln] == '\n')
        novoProfessor->matricula[ln] = '\0';
    fflush(stdin);

    printf("Digite o sexo: ");
    scanf("%c", &novoProfessor->sexo);
    fflush(stdin);

    printf("Data de nascimento\n");

    printf("Dia: ");
    scanf("%d", &novoProfessor->dataNascimento.dia);
    fflush(stdin);

    printf("Mes: ");
    scanf("%d", &novoProfessor->dataNascimento.mes);
    fflush(stdin);

    printf("Ano: ");
    scanf("%d", &novoProfessor->dataNascimento.ano);
    fflush(stdin);

    inserirAlunoNaLista(inicio, novoProfessor);
}

void listarProfessores(Pessoa **inicio)
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