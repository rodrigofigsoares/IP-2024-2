#include <stdio.h>

#define N 500

int ehPermutacao(int M[N][N], int n, int * soma) {
    int i, j, qtdZero, qtdUm;
    for(i=0;i<n;i++) for(j=0;j<n;j++) *soma += M[i][j];
    for(i=0;i<n;i++)
    {
        qtdZero = 0;
        qtdUm = 0;
        for(j=0;j<n;j++)
        {
            if(M[i][j] == 0) qtdZero++;
            if(M[i][j] == 1) qtdUm++;
        }
        if(qtdZero != n-1 || qtdUm != 1) return 0;
    }
    for(j=0;j<n;j++)
    {
        qtdZero = 0;
        qtdUm = 0;
        for(i=0;i<n;i++)
        {
            if(M[i][j] == 0) qtdZero++;
            if(M[i][j] == 1) qtdUm++;
        }
        if(qtdZero != n-1 || qtdUm != 1) return 0;
    }
    return 1;
}

int main() {
    int M[N][N];
    int soma[1];
    int n, i, j, verify;
    scanf("%d", &n);
    soma[0] = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    verify = ehPermutacao(M, n, soma);
    printf("%d\n", n);
    if(verify == 0) printf("NAO EH PERMUTACAO\n");
    else printf("PERMUTACAO\n");
    printf("%d\n", *soma);
    return 0;
}