#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aluno.h"
// #include "professor.h"

void main()
{
    Pessoa aluno, *inicioListaAluno = NULL;
    Pessoa professor, *inicioListaProfessor = NULL;
    Pessoa *atual, *tmp;
    char continuar;

    // printf("-----------------------------\n");
    // printf("       Menu principal\n");
    // printf("-----------------------------\n");

    while (continuar != 'N')
    {
        cadastroAluno(&inicioListaAluno);

        printf("Deseja cadastrar outro aluno(a)? (S/N)\n");
        scanf("%c", &continuar);
        continuar = toupper(continuar);
        fflush(stdin);
    }

    listarAlunos(&inicioListaAluno);

    atual = inicioListaAluno;
    while (atual != NULL)
    {
        tmp = atual->prox;
        free(atual);
        atual = tmp;
    }
}
