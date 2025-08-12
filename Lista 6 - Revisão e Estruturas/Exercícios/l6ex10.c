#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float * coef;
    int * pot;
} poly;

void read_poly(poly * p, int pos, int tam) {
    int i;
    for(i=0;i<tam;i++) scanf("%f%d", &p[pos].coef[i], &p[pos].pot[i]);
}

void sum_poly(poly * p, int tam1, int tam2, int tamT) {
    int i = 0, j = 0, k = 0;
    while(1)
    {
        if(p[0].pot[i] == p[1].pot[j])
        {
            p[2].coef[k] = p[0].coef[i] + p[1].coef[j];
            p[2].pot[k] = p[0].pot[i];
            i++;
            j++;
        }
        else if((p[0].pot[i] > p[1].pot[j] && j < tam2) || j == tam2)
        {
            p[2].coef[k] = p[0].coef[i];
            p[2].pot[k] = p[0].pot[i];
            i++;
        }
        else if((p[1].pot[j] > p[0].pot[i] && i < tam1) || i == tam1)
        {
            p[2].coef[k] = p[1].coef[j];
            p[2].pot[k] = p[1].pot[j];
            j++;
        }
        k++;
        if((i == tam1 && j == tam2) || k == tamT) break;
    }
}

void sub_poly(poly * p, int tam1, int tam2, int tamT) {
        int i = 0, j = 0, k = 0;
    while(1)
    {
        if(p[0].pot[i] == p[1].pot[j])
        {
            p[2].coef[k] = p[0].coef[i] - p[1].coef[j];
            p[2].pot[k] = p[0].pot[i];
            i++;
            j++;
        }
        else if((p[0].pot[i] > p[1].pot[j] && j < tam2) || j == tam2)
        {
            p[2].coef[k] = -p[0].coef[i];
            p[2].pot[k] = p[0].pot[i];
            i++;
        }
        else if((p[1].pot[j] > p[0].pot[i] && i < tam1) || i == tam1)
        {
            p[2].coef[k] = -p[1].coef[j];
            p[2].pot[k] = p[1].pot[j];
            j++;
        }
        k++;
        if((i == tam1 && j == tam2) || k == tamT) break;
    }
}

void print_poly(poly * p, int pos, int tam) {
    int i;
    for(i=0;i<tam;i++)
    {
        if(p[pos].coef[i] != 0)
        {
            if(i == 0)
            {
                if(p[pos].coef[i] < 0)
                {
                    printf("−");
                    printf("%.2fX ∧ ", -p[pos].coef[i]);
                }
                else printf("%.2fX ∧ ", p[pos].coef[i]);
                printf("%d ", p[pos].pot[i]);
            }
            else
            {
                if(p[pos].coef[i] > 0) printf("+ ");
                else printf("− ");
                if(p[pos].pot[i] != 0)
                {
                    if(p[pos].coef[i] < 0) printf("%.2fX ∧ ", -p[pos].coef[i]);
                    else printf("%.2fX ∧ ", p[pos].coef[i]);
                    printf("%d ", p[pos].pot[i]);
                }
                else
                {
                    if(p[pos].coef[i] < 0) printf("%.2f", -p[pos].coef[i]);
                    else printf("%.2f", p[pos].coef[i]);
                }
            }
        }
    }
    printf("\n");
}

int main() {
    int n, n1, n2, k, tam;
    char sinal;
    poly p[3];
    scanf("%d%*c", &n);
    while(n--)
    {
        k = 0;
        scanf("%c", &sinal);
        scanf("%d", &n1);
        p[k].coef = (float*)malloc(n1*sizeof(float));
        p[k].pot = (int*)malloc(n1*sizeof(int));
        read_poly(p, k, n1);
        k = 1;
        scanf("%d", &n2);
        p[k].coef = (float*)malloc(n2*sizeof(float));
        p[k].pot = (int*)malloc(n2*sizeof(int));
        read_poly(p, k, n2);
        k = 2;
        if(p[0].pot[0] >= p[1].pot[0]) tam = p[0].pot[0] + 1;
        else tam = p[1].pot[0] + 1;
        p[k].coef = (float*)malloc(tam*sizeof(float));
        p[k].pot = (int*)malloc(tam*sizeof(int));
        if(sinal == '+') sum_poly(p, n1, n2, tam);
        else sub_poly(p, n1, n2, tam);
        print_poly(p, k, tam);
        free(p[0].coef);
        free(p[0].pot);
        free(p[1].coef);
        free(p[1].pot);
        free(p[2].coef);
        free(p[2].pot);
        scanf("%*c");
    }
    return 0;
}