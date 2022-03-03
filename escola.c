#include <stdio.h>
#include <string.h>
#define TAM_ALUNOS 1
#define TAM_PROFESSORES 1
#define TAM_DISCIPLINAS 1

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[31];
    char matricula[15];
    char cpf[14];
    char sexo;
    Data dataNascimento;
} Pessoa;

typedef struct
{
    char codigo[7];
    char nome[100];
    char professor[100];
    int semestre;
    Pessoa alunos[100];

} Disciplina;

Pessoa alunos[TAM_ALUNOS];
Pessoa professores[TAM_PROFESSORES];
Disciplina disciplinas[TAM_DISCIPLINAS];

void apagarCadastro() {}

void atualizarCadastro() {}

void cadastroPessoas()
{
    int i, j;
    int length = sizeof(alunos) / sizeof(alunos[0]);

    for (i = 0; i < TAM_ALUNOS; i++)
    {
        printf("Nome do aluno: ");
        fgets(alunos[i].nome, 31, stdin);
        size_t ln = strlen(alunos[i].nome) - 1;
        if (alunos[i].nome[ln] == '\n')
            alunos[i].nome[ln] = '\0';
        fflush(stdin);

        printf("Digite o CPF: ");
        fgets(alunos[i].cpf, 14, stdin);
        ln = strlen(alunos[i].cpf) - 1;
        if (alunos[i].cpf[ln] == '\n')
            alunos[i].cpf[ln] = '\0';
        fflush(stdin);

        printf("Matrícula do aluno: ");
        fgets(alunos[i].matricula, 14, stdin);
        ln = strlen(alunos[i].matricula) - 1;
        if (alunos[i].matricula[ln] == '\n')
            alunos[i].matricula[ln] = '\0';
        fflush(stdin);

        printf("Digite o sexo: ");
        scanf("%c", &alunos[i].sexo);
        fflush(stdin);

        printf("Data de nascimento\n");

        printf("Dia: ");
        scanf("%d", &alunos[i].dataNascimento.dia);
        fflush(stdin);

        printf("Mês: ");
        scanf("%d", &alunos[i].dataNascimento.mes);
        fflush(stdin);

        printf("Ano: ");
        scanf("%d", &alunos[i].dataNascimento.ano);
        fflush(stdin);

        puts(alunos[i].nome);
        puts(alunos[i].matricula);
        puts(alunos[i].cpf);
        printf("%c \n", alunos[i].sexo);
        printf("%02d / %02d / %d", alunos[i].dataNascimento.dia, alunos[i].dataNascimento.mes, alunos[i].dataNascimento.ano);
        // printf("Deseja cadastrar outro aluno(a)?\n");
        // scanf("%c", &continuar);
    }
};

void cadastroDisciplina()
{
    int i;

    for (i = 0; i < TAM_DISCIPLINAS; i++)
    {
        printf("Informe o código da disciplina: ");
        fgets(disciplinas[i].codigo, 7, stdin);
        size_t ln = strlen(disciplinas[i].codigo) - 1;
        if (disciplinas[i].codigo[ln] == '\n')
            disciplinas[i].codigo[ln] = '\0';
        fflush(stdin);

        printf("Informe o nome da disciplina: ");
        fgets(disciplinas[i].nome, 31, stdin);
        ln = strlen(disciplinas[i].nome) - 1;
        if (disciplinas[i].nome[ln] == '\n')
            disciplinas[i].nome[ln] = '\0';
        fflush(stdin);

        printf("Informe o nome do professor da disciplina: ");
        fgets(disciplinas[i].professor, 31, stdin);
        ln = strlen(disciplinas[i].professor) - 1;
        if (disciplinas[i].professor[ln] == '\n')
            disciplinas[i].professor[ln] = '\0';
        fflush(stdin);

        printf("Informe o semestre da disciplina: ");
        scanf("%d", &disciplinas[i].semestre);

        printf("%s || ", disciplinas[i].codigo);
        printf("%s || ", disciplinas[i].nome);
        printf("%s || ", disciplinas[i].professor);
        printf("%d", disciplinas[i].semestre);
    }
}

void main()
{
    // Pessoa alunos[TAM_ALUNOS], professores[TAM_PROFESSORES];
    // int option;

    // printf("O que deseja cadastrar? \n\t1 - Alunos \n\t2 - Professores\n");

    // printf(">> ");
    // scanf("%d", &option);
    // getchar();

    // cadastroPessoas();

    Disciplina disciplinas = cadastroDisciplina();
}
