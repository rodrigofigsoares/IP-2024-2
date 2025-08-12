#include <stdio.h>

#define N 10

int main() {
    int M[N][N], T[N][N];
    int n, i, j, contador = 0;
    scanf("%d", &n);
    if(n > N || n < 1)
    {
        printf("dimensao invalida\n");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &M[i][j]);
            T[j][i] = M[i][j];
        }
    }
    for(i=0;i<n;i++) for(j=0;j<n;j++) if(M[i][j] != T[i][j]) contador++;
    if(contador > 0) printf("nao bissimetrica");
    else printf("bissimetrica");
    printf("\n");
    return 0;
}