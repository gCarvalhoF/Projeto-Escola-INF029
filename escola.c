#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "professor.h"
#include "escola.h"
// #include "professor.h"

// menu principal
int menu()
{
    int menu_opt;

    printf("*************************\n");
    printf("      MENU PRINCIPAL     \n");
    printf("*************************\n");
    printf("1 - Cadastrar Aluno\n");
    printf("2 - Cadastrar Professor\n");
    printf("3 - Cadastrar Disciplina\n");
    printf("4 - Cadastrar Turma\n");
    printf("5 - Listar Alunos\n");
    printf("6 - Listar Professores\n");
    printf("7 - Listar Disciplinas\n");
    printf("8 - Listar Turmas\n");
    printf("0 - Sair\n");
    scanf("%d", &menu_opt);

    return menu_opt;
}

void main()
{

    Pessoa lista_aluno[TAM_LISTA_ALUNOS];
    Pessoa lista_professor[TAM_LISTA_PROFESSORES];
    int qtd_alunos = 0, qtd_professores = 0;
    char continuar;
    char continuar_break = 'N';
    int menu_opt;

    // printf("-----------------------------\n");
    menu_opt = menu();
    for (;;)
    {
        switch (menu_opt)
        {
        case 1:
            while (toupper(continuar) != continuar_break)
            {
                qtd_alunos = cadastroAluno(lista_aluno, qtd_alunos);

                printf("Deseja cadastrar outro aluno(a)? (S/N)\n");
                scanf("%c", &continuar);
            }
        case 2:
            cadastroProfessor(lista_professor, qtd_professores);
        case 3:
        case 4:
            continue;
        case 5:
            listarAlunos(lista_aluno, qtd_alunos);
        case 6:
            listarProfessores(lista_professor, qtd_professores);
        case 7:
            continue;
        case 8:
            continue;

        default:
            printf("Saindo do sistema escola... \n");
            break;
        }
        break;
    }
}
