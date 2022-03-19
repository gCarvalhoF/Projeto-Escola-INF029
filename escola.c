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

    // printf("-----------------------------\n");
    // printf("       Menu principal\n");
    // printf("-----------------------------\n");

    while (continuar != 'N')
    {  
        qtd_alunos = cadastroAluno(lista_aluno, qtd_alunos);     

        printf("Deseja cadastrar outro aluno(a)? (S/N)\n");
        scanf("%c", &continuar);
        continuar = toupper(continuar);
        getchar();
       
    }

    listarAlunos(lista_aluno, qtd_alunos);
}
