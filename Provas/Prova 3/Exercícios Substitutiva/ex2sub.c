#include <stdio.h>
#include <stdlib.h>
    
typedef struct {
    int n_linhas, n_colunas;
    int ** dados;
} Mat;
    
int main() {
    int n, k, i, j, th;
    scanf("%d", &n);
    Mat * M = (Mat*)malloc(n*sizeof(Mat));
    int * contador = (int*)malloc(n*sizeof(int));
    for(k=0;k<n;k++)
    {
        contador[k] = 0;
        scanf("%d%d", &M[k].n_linhas, &M[k].n_colunas);
        M[k].dados = (int**)malloc(M->n_linhas*sizeof(int*));
        for(i=0;i<M[k].n_linhas;i++)
        {
            M[k].dados[i] = (int*)malloc(M[k].n_colunas*sizeof(int));
            for(j=0;j<M[k].n_colunas;j++) scanf("%d", &(M[k].dados[i][j]));
        }
    }
    scanf("%d", &th);
    for(k=0;k<n;k++)
    {
        for(i=0;i<M[k].n_linhas;i++)
        {
            for(j=0;j<M[k].n_colunas;j++)
            {
                if(M[k].dados[i][j] <= th)
                {
                    M[k].dados[i][j] = 0;
                    contador[k]++;
                }
            }
        }
    }
    while(k--)
    {
        for(i=0;i<M[k].n_linhas;i++)
        {
            for(j=0;j<M[k].n_colunas;j++)
            {
                if(j == M[k].n_colunas-1) printf("%d\n", M[k].dados[i][j]);
                else printf("%d ", M[k].dados[i][j]);
            }
        }
        printf("%d elementos zerados\n", contador[k]);
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<M[k].n_linhas;i++) free(M[k].dados[i]);
        free(M[k].dados);
    }
    free(M);
    free(contador);
    return 0;
}