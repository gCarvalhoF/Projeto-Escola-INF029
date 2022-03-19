#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aluno.h"
#include "escola.h"
// #include "professor.h"

void main()
{
    Pessoa lista_aluno[TAM_LISTA_ALUNOS];
    Pessoa lista_professor[TAM_LISTA_PROFESSORES];
    int qtd_alunos = 0, qtd_professores = 0;
    char continuar;
    char continuar_break = 'N';

    // printf("-----------------------------\n");
    // printf("       Menu principal\n");
    // printf("-----------------------------\n");
    while (toupper(continuar) != continuar_break)
    {
        qtd_alunos = cadastroAluno(lista_aluno, qtd_alunos);

        printf("Deseja cadastrar outro aluno(a)? (S/N)\n");
        scanf("%c", &continuar);
    }

    listarAlunos(lista_aluno, qtd_alunos);
}
