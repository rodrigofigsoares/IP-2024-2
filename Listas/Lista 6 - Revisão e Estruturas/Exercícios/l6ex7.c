#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double x, y, z, w;
} ponto;

double calc_dist(ponto * p, int i) {
    double dist;
    dist = sqrt(pow(p[i].x - p[i+1].x, 2) + pow(p[i].y - p[i+1].y, 2) + pow(p[i].z - p[i+1].z, 2) + pow(p[i].w - p[i+1].w, 2));
    return dist;
}

int main() {
    int n, i;
    double dist;
    scanf("%d", &n);
    ponto * p = (ponto*)malloc(n*sizeof(ponto));
    for(i=0;i<n;i++) scanf("%lf%lf%lf%lf", &p[i].x, &p[i].y, &p[i].z, &p[i].w);
    for(i=0;i<n-1;i++)
    {
        dist = calc_dist(p, i);
        printf("%.2lf\n", dist);
    }
    free(p);
    return 0;
}