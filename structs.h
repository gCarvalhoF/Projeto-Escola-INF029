typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct dados_pessoa
{
    char nome[31];
    char matricula[15];
    char cpf[14];
    char sexo;
    Data dataNascimento;
    struct dados_pessoa *prox;
} Pessoa;

typedef struct
{
    char codigo[7];
    char nome[100];
    Pessoa professor;
    int semestre;
    Pessoa alunos;

} Disciplina;
