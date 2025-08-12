#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula, dia, mes, ano;
    char nome[201];
} aluno;

void ordena_alunos(aluno * turma, int * ordem, int tam) {
    // int ordem[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j, maior_ano, maior_mes, maior_dia, temp;
    for(i=0;i<tam;i++)
    {
        maior_ano = turma[ordem[i]].ano;
        maior_mes = turma[ordem[i]].mes;
        maior_dia = turma[ordem[i]].dia;
        for(j=i+1;j<tam;j++)
        {
            if(turma[ordem[j]].ano > maior_ano) 
            {
                maior_ano = turma[ordem[j]].ano;
                maior_mes = turma[ordem[j]].mes;
                maior_dia = turma[ordem[j]].dia;
                temp = ordem[i];
                ordem[i] = ordem[j];
                ordem[j] = temp;
            }
            else if(turma[ordem[j]].ano == maior_ano)
            {
                if(turma[ordem[j]].mes > maior_mes) 
                {
                    maior_mes = turma[ordem[j]].mes;
                    maior_dia = turma[ordem[j]].dia;
                    temp = ordem[i];
                    ordem[i] = ordem[j];
                    ordem[j] = temp;
                }
                else if(turma[ordem[j]].mes == maior_mes) 
                {
                    if(turma[ordem[j]].dia >= maior_dia) 
                    {
                        maior_dia = turma[ordem[j]].dia;
                        temp = ordem[i];
                        ordem[i] = ordem[j];
                        ordem[j] = temp;
                    }
                }
            }
        }
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    aluno * turma = (aluno*)malloc(n*sizeof(aluno));
    int * alunos = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) 
    {
        scanf("%d%d%d%d%*c%[^\n]%*c", &turma[i].matricula, &turma[i].dia, &turma[i].mes, &turma[i].ano, turma[i].nome);
        alunos[i] = i;
    }
    ordena_alunos(turma, alunos, n);
    for(i=0;i<n;i++) printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", turma[alunos[i]].matricula, turma[alunos[i]].nome, turma[alunos[i]].dia, turma[alunos[i]].mes, turma[alunos[i]].ano);
    free(turma);
    free(alunos);
    return 0;
}