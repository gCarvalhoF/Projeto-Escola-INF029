typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    char nome[31];
    int matricula;
    char cpf[14];
    char sexo;
    Data dataNascimento;
} Pessoa;

typedef struct
{
    char codigo[7];
    char nome[100];
    Pessoa professor;
    int semestre;
    Pessoa alunos;

} Disciplina;
