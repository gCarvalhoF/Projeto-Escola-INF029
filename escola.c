#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "aluno.h"
#include "escola.h"
// #include "professor.h"

//menu principal
void menu(){
    int menu;
do{
    printf("*************************\n");
    printf("      MENU PRINCIPAL     \n");
    printf("*************************\n");
    printf("1 - Cadastrar Aluno\n");
    printf("2 - Cadastrar Professor\n");
    printf("3 - Cadastrar Disciplina\n");
    printf("4 - Cadastrar Turma\n");
    printf("5 - Cadastrar Matricula\n");
    printf("6 - Listar Alunos\n");
    printf("7 - Listar Professores\n");
    printf("8 - Listar Disciplinas\n");
    printf("9 - Listar Turmas\n");
    printf("10 - Listar Matriculas\n");
    printf("0 - Sair\n");
    scanf("%d", &menu);
}while(menu!=0);
}

void main()
{
    menu();
    Pessoa lista_aluno[TAM_LISTA_ALUNOS];
    Pessoa lista_professor[TAM_LISTA_PROFESSORES];
    int qtd_alunos = 0, qtd_professores = 0;
    char continuar;
    char continuar_break = 'N';

  // printf("-----------------------------\n");
      menu();
  // printf("-----------------------------\n");
    while (toupper(continuar) != continuar_break)
    {
        qtd_alunos = cadastroAluno(lista_aluno, qtd_alunos);

        printf("Deseja cadastrar outro aluno(a)? (S/N)\n");
        scanf("%c", &continuar);
    }

    listarAlunos(lista_aluno, qtd_alunos);
}
