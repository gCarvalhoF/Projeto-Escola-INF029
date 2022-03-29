#include <ctype.h>
#include "structs.h"

int gerarMatriculaAluno();
int cadastroAluno(Pessoa lista_aluno[], int qtd_alunos);
void listarAlunos(Pessoa lista_aluno[], int qtd_alunos);
void listarAlunosSexo(Pessoa lista_aluno[], int qtd_alunos);
int buscaAluno(Pessoa lista_aluno[], int qtd_alunos);
void apagarAluno(Pessoa lista_aluno[], int qtd_alunos);
void atualizarAluno();
void aniversarianteDoMesAluno(Pessoa lista_aluno[], int qtd_alunos);
