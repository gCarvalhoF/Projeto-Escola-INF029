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
    printf("3 - Apagar aluno\n");
    printf("4 - Listar Alunos\n");
    printf("5 - Listar Alunos por sexo\n");
    printf("6 - Aniversariantes do mês\n");
    printf("0 - Sair\n");
    scanf("%d", &menu_opt);

    return menu_opt;
}

int main()
{
    Disciplina lista_disciplina[TAM_LISTA_DISCIPLINAS];
    Pessoa lista_aluno[TAM_LISTA_ALUNOS];
    Pessoa lista_professor[TAM_LISTA_PROFESSORES];
    int qtd_alunos = 0, qtd_professores = 0, qtd_disciplina = 0;
    char continuar;
    char continuar_break = 'N';
    int menu_opt;

    // printf("-----------------------------\n");
    
    fflush(stdin);
    for (;;)
    {
        
        menu_opt = menu();
      
        switch (menu_opt)
        {
        case 1:
            // system("clear");
            while (toupper(continuar) != continuar_break)
            {
              getchar();
              qtd_alunos = cadastroAluno(lista_aluno, qtd_alunos);

              printf("Deseja cadastrar outro aluno(a)? (S/N)");
              getchar();
              scanf("%c", &continuar);
              getchar();
            }
          continue;
          
        case 2:
            // system("clear");
            while (toupper(continuar) != continuar_break)
            {
              getchar();              
              qtd_professores = cadastroProfessor(lista_professor, qtd_professores);
              
              printf("Deseja cadastrar outro professor(a)? (S/N)");
              getchar();
              scanf("%c", &continuar);
              getchar();
            }
            continue;
          
        case 3:
            // system("clear");
            qtd_alunos = apagarAluno(lista_aluno, qtd_alunos);
            continue;

        case 4:
            // system("clear");
            listarAlunos(lista_aluno, qtd_alunos);
          continue;
        case 5:
            listarAlunosSexo(lista_aluno, qtd_alunos);
          continue;
        case 6:
            aniversarianteDoMesAluno(lista_aluno, qtd_alunos);
          continue;

        default:
            printf("Saindo do sistema escola... \n");
            break;
        }
        break;
    }
}
