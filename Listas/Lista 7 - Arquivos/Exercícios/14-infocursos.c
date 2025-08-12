#include <stdio.h>
#include <string.h>

typedef struct {
    char name[101];
    char prof[101];
    int qtd_alunos;
    double media_aprov;
} curso;

int main(int argc, char ** argv) {
    if(argc != 2)
    {
        printf("Entrada Invalida!\n");
        printf("Tente: ./cursos <arq_input>\n");
        return 0;
    }
    FILE * input = fopen(argv[1], "r");
    curso p[4];
    int i;
    for(i=0;i<4;i++)
    {
        fscanf(input, "%[^\n]%*c", p[i].name);
        fscanf(input, "%[^\n]%*c", p[i].prof);
        fscanf(input, "%d", &p[i].qtd_alunos);
        fscanf(input, "%lf%*c", &p[i].media_aprov);
    }
    for(i=0;i<4;i++)
    {
        printf("Disciplina: %s\n", p[i].name);
        printf("Quantidade de alunos matriculados: %d\n", p[i].qtd_alunos);
        printf("Media de aprovados: %.2lf\n", p[i].media_aprov);
    }
    fclose(input);
    return 0;
}