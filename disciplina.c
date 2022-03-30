#include <stdio.h>
#include <string.h>
#include "aluno.h"
#include "structs.h"

#define TAM_DISCIPLINAS 10

void cadastroDisciplina()
{
    int i;
    int ln;

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

int buscaDisciplina(Disciplina lista_disciplina[], int qtd_disciplina)
{

  int opcao;
  char buscaCodigo[7];
  char buscaNome[30];
  int i, result;

  result=-1;
  printf("Deseja Buscar a Disciplina por 1-Nome ou 2- Matricula ? : ");
  scanf("%d", &opcao);

  if (opcao == 1)
  {
    printf("Digite o nome da Disciplina: ");
    fgets(buscaNome, 31, stdin);
    size_t ln = strlen(buscaNome) - 1;
    if (buscaNome[ln] == '\n')
      buscaNome[ln] = '\0';

    for (i = 0; i <= qtd_disciplina; i++)
    {
      if (buscaNome == lista_disciplina[i].nome)
        result=i;

    }
    return result;
  }

  if (opcao == 2)
  {
    printf("Digite o codigo da displina: ");
    fgets(buscaCodigo, 8, stdin);
    size_t ln = strlen(buscaCodigo) - 1;
    if (buscaCodigo[ln] == '\n')
      buscaCodigo[ln] = '\0';
    fflush(stdin);

    for (i = 0; i <= qtd_disciplina; i++)
    {
      if (buscaCodigo == lista_disciplina[i].codigo)
        result=i;

    }
    return result;
  }
}



void inserirAluno(Disciplina lista_disciplina[], int qtd_disciplina, Pessoa lista_aluno[], int qtd_alunos){

  int i;
  int j;
  int op;
  int ad;
  int n;

  i=buscaDisciplina(Disciplina lista_disciplina[], int qtd_disciplina);
  if(i!=-1){
    printf("Deseja Adcionar aluno à disciplina escolhida? (1-Sim / 2-Não)");
    scanf("%d",&op);
    fflush(stdin);
    size_t n = sizeof(lista_disciplina[i].alunos);
    while(op==1){
      
     j=buscaAluno(Pessoa lista_aluno[], int qtd_alunos);
      if(j!=0){
        printf("-----Dados do Aluno Encontrado-----\n");
        printf("\n-----------------------------\n");
        puts(lista_aluno[j].nome);
        printf("%d \n", lista_aluno[j].matricula);
        puts(lista_aluno[j].cpf);
        printf("%c \n", lista_aluno[j].sexo);
        printf("%02d / %02d / %4d", lista_aluno[j].dataNascimento.dia, lista_aluno[j].dataNascimento.mes, lista_aluno[j].dataNascimento.ano);
        printf("\n-----------------------------\n");
        fflush(stdin);
        printf("Deseja Adcionar o Aluno na Disciplina?(1-Sim 2-Não):");
        scanf("%d",&ad);
        if(ad==1){
          lista_disciplina[i].alunos[n]=lista_aluno[j];
          printf("Aluno Adcionado à Disciplina! \n");
          n=n+1; //pular para proxima sequencia no vetor de alunos
          printf("Deseja Adcionar aluno à disciplina escolhida? (1-Sim / 2-Não)");
          scanf("%d",&op);
          fflush(stdin);
        }else{
          printf("Aluno NÃO Adcionado à Disciplina! \n");
          printf("Deseja Adcionar aluno à disciplina escolhida? (1-Sim / 2-Não)");
          scanf("%d",&op);
          fflush(stdin);
          }
    
      }


          
    }
    

  }else
    printf("Disciplina Não Encontrada!");
   
  

  
}

void listarDisciplina(Disciplina lista_disciplina[], int qtd_disciplina)
{
  int i;
  int j;

  for (i = 0; i < qtd_disciplina; i++)
  {
    printf("\n-----------------------------\n");
    puts(lista_disciplina[i].nome);
    printf("%s \n", lista_disciplina[i].codigo);
    printf("%s \n", lista_disciplina[i].professor);
    puts(lista_disciplina[i].semestre);
    printf("%s \n", lista_disciplina[i].alunos);
    
  }
}
