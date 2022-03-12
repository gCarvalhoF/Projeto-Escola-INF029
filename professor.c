#include <stdio.h>
#include <string.h>

void cadastroProfessores(Pessoa *professores)
{
    int i, j;
    int tam_professores = sizeof(professores) / sizeof(professores[0]);
    char continuar;

    for (i = tam_professores; i < 1; i++)
    {
        printf("Nome do professor: ");
        fgets(professores[i].nome, 31, stdin);
        size_t ln = strlen(professores[i].nome) - 1;
        if (professores[i].nome[ln] == '\n')
            professores[i].nome[ln] = '\0';
        fflush(stdin);

        printf("Digite o CPF: ");
        fgets(professores[i].cpf, 14, stdin);
        ln = strlen(professores[i].cpf) - 1;
        if (professores[i].cpf[ln] == '\n')
            professores[i].cpf[ln] = '\0';
        fflush(stdin);

        printf("Matrícula do aluno: ");
        fgets(professores[i].matricula, 14, stdin);
        ln = strlen(professores[i].matricula) - 1;
        if (professores[i].matricula[ln] == '\n')
            professores[i].matricula[ln] = '\0';
        fflush(stdin);

        printf("Digite o sexo: ");
        scanf("%c", &professores[i].sexo);
        fflush(stdin);

        printf("Data de nascimento\n");

        printf("Dia: ");
        scanf("%d", &professores[i].dataNascimento.dia);
        fflush(stdin);

        printf("Mês: ");
        scanf("%d", &professores[i].dataNascimento.mes);
        fflush(stdin);

        printf("Ano: ");
        scanf("%d", &professores[i].dataNascimento.ano);
        fflush(stdin);

        printf("-----------------------------\n");
        printf("Deseja cadastrar outro professor(a)? (S/N)\n");
        scanf("%c", &continuar);

        if (toupper(continuar) == "N")
        {
            break;
        }
    }
}

void apagarCadastro() {}

void atualizarCadastro() {}