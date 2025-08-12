#include <stdio.h>

typedef struct {
    char name[101];
    int matricula;
    float N1, N2, N3;
} Aluno;

int main() {
    FILE * arq = fopen("aluno.txt", "w");
    Aluno student[3];
    int i;
    for(i=0;i<3;i++) 
    {
        scanf("%[^\n]%*c%d%f%f%f%*c", student[i].name, &student[i].matricula, &student[i].N1, &student[i].N2, &student[i].N3);
    }
    for(i=0;i<3;i++)
    {
        fprintf(arq, "%s\n", student[i].name);
        fprintf(arq, "%d\n", student[i].matricula);
        fprintf(arq, "%.2f\n%.2f\n%.2f\n", student[i].N1, student[i].N2, student[i].N3);
    }
    fclose(arq);
    arq = fopen("aluno.txt", "r");
    for(i=0;i<3;i++)
    {
        fscanf(arq, "%[^\n]%*c", student[i].name);
        fscanf(arq, "%d", &student[i].matricula);
        fscanf(arq, "%f%f%f%*c", &student[i].N1, &student[i].N2, &student[i].N3);
        printf("Aluno: %s\n", student[i].name);
        printf("Matricula: %d\n", student[i].matricula);
        printf("Nota 1: %.2f\nNota 2: %.2f\nNota 3: %.2f\n", student[i].N1, student[i].N2, student[i].N3);
    }
    fclose(arq);
    return 0;
}