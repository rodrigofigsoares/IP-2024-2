#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int code;
    float cred_value;
    char name[101];
} uni;

typedef struct {
    char name[501];
    int code;
    int cred_qtd;
} student;

double calc_creditos(uni * cursos, student * alunos, int curso, int aluno) {
    double creditos;
    creditos = cursos[curso].cred_value * alunos[aluno].cred_qtd;
    return creditos;
}

int main() {
    int n, i, j, m;
    double creditos;
    scanf("%d", &n);
    uni * cursos = (uni*)malloc(n*sizeof(uni));
    for(i=0;i<n;i++)
    {
        scanf("%d", &cursos[i].code);
        scanf("%f", &cursos[i].cred_value);
        scanf("%*c%[^\n]%*c", cursos[i].name);
    }
    scanf("%d", &m);
    student * alunos = (student*)malloc(m*sizeof(student));
    for(i=0;i<m;i++)
    {
        scanf("%*c%[^\n]%*c", alunos[i].name);
        scanf("%d", &alunos[i].code);
        scanf("%d", &alunos[i].cred_qtd);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(alunos[i].code == cursos[j].code) 
            {
                creditos = calc_creditos(cursos, alunos, j, i);
                break;
            }
        }
        printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2lf\n", alunos[i].name, cursos[j].name, alunos[i].cred_qtd, cursos[j].cred_value, creditos);
    }
    free(cursos);
    free(alunos);
    return 0;
}