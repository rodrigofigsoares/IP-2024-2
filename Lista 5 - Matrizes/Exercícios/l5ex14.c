#include <stdio.h>

#define N 1000

void ordena_colunas(int M[][N], int dim) {
    int idMenor, temp, k;
    int l, c;
    for(c=0;c<dim;c++)
    {
        for(l=0;l<dim;l++)
        {
            idMenor = l;
            for(k=l+1;k<dim;k++) if(M[k][c] < M[idMenor][c]) idMenor = k;
            temp = M[idMenor][c];
            M[idMenor][c] = M[l][c];
            M[l][c] = temp;
        }
    }
}

int main() {
    int M[N][N];
    int n, i, j;
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    ordena_colunas(M, n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d", M[i][j]);
            if(j == n-1) printf("\n");
            else printf(" ");
        }
    }
    return 0;
}