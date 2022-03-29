#include <stdio.h>
#include <string.h>

#define TAM_DISCIPLINAS 10

void cadastroDisciplina()
{
    int i;

    for (i = 0; i < TAM_DISCIPLINAS; i++)
    {
        printf("Informe o código da disciplina: ");
        fgets(Disciplina[i].codigo, 7, stdin);
        size_t ln = strlen(Disciplina[i].codigo) - 1;
        if (Disciplina[i].codigo[ln] == '\n')
            Disciplina[i].codigo[ln] = '\0';
        fflush(stdin);

        printf("Informe o nome da disciplina: ");
        fgets(Disciplina[i].nome, 31, stdin);
        ln = strlen(Disciplina[i].nome) - 1;
        if (Disciplina[i].nome[ln] == '\n')
            Disciplina[i].nome[ln] = '\0';
        fflush(stdin);

        printf("Informe o nome do professor da disciplina: ");
        fgets(Disciplina[i].professor, 31, stdin);
        ln = strlen(Disciplina[i].professor) - 1;
        if (Disciplina[i].professor[ln] == '\n')
            Disciplina[i].professor[ln] = '\0';
        fflush(stdin);

        printf("Informe o semestre da disciplina: ");
        scanf("%d", &Disciplina[i].semestre);

        printf("%s || ", Disciplina[i].codigo);
        printf("%s || ", Disciplina[i].nome);
        printf("%s || ", Disciplina[i].professor);
        printf("%d", Disciplina[i].semestre);
    }
}

void listarDisciplina(Disciplina lista_disciplina[], int qtd_disciplina)
{
  int i;

  for (i = 0; i < qtd_disciplina; i++)
  {
    printf("\n-----------------------------\n");
    puts(lista_disciplina[i].nome);
    printf("%d \n", lista_disciplina[i].codigo);
    printf("%s \n", lista_disciplina[i].Pessoa professor);
    puts(lista_disciplina[i].semestre);
    printf("%s \n", lista_disciplina[i].Pessoa alunos);
    
  }
}
