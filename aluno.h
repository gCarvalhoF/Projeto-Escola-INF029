#include "structs.h"
#include <ctype.h>

int cadastroAluno(Pessoa lista_aluno[], int qtd_alunos);
void listarAlunos(Pessoa lista_aluno[], int qtd_alunos);
void apagarCadastro(Pessoa lista_aluno[], int qtd_alunos);
void atualizarCadastro();
void aniversarianteDoMes(Pessoa lista_aluno[], int qtd_alunos);
int buscaAluno(Pessoa lista_aluno[], int qtd_alunos);
void listarAlunosSexo(Pessoa lista_aluno[], int qtd_alunos);