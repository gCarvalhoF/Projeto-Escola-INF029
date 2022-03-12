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
