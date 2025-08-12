#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x, y, z, w;
    double norma;
} point;

double calc_norma(point * p, int i) {
    double norma;
    norma = sqrt((p[i].x*p[i].x + p[i].y*p[i].y + p[i].z*p[i].z + p[i].w*p[i].w));
    return norma;
}

int main() {
    int n, i, j, id;
    scanf("%d", &n);
    point * pontos = (point*)malloc(n*sizeof(point));
    double * normas = (double*)malloc(n*sizeof(double));
    int * positions = (int*)malloc(n*sizeof(int));
    int temp2;
    double menor, temp;
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf%lf%lf", &(pontos[i].x), &(pontos[i].y), &(pontos[i].z), &(pontos[i].w));
        normas[i] = pontos[i].norma = calc_norma(pontos, i);
        positions[i] = i;
    }
    for(i=0;i<n;i++)
    {
        menor = normas[i];
        id = i;
        for(j=i;j<n;j++)
        {
            if(normas[j] < menor) 
            {
                menor = normas[j];
                id = j;
            }
        }
        temp = normas[i];
        temp2 = positions[i];
        normas[i] = menor;
        positions[i] = id;
        normas[id] = temp;
        positions[id] = temp2;
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", pontos[positions[i]].x, pontos[positions[i]].y, pontos[positions[i]].z, pontos[positions[i]].w, normas[i]);
    }
    free(pontos);
    free(normas);
    free(positions);
    return 0;
}