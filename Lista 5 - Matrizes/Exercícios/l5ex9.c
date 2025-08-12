#include <stdio.h>

#define N 1000

void diagonal(int M[][N], int size, int * d) {
    int i = 0, j = 0;
    while(1)
    {
        if(i == size) break;
        *d += M[i][j];
        i++;
        j++;
    }
}

int main() {
    int M[N][N], T[N][N], d = 0;
    int n, i, j;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &M[i][j]);
            T[j][i] = M[i][j];
        }
    }
    diagonal(M, n, &d);
    i = 0;
    j = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            T[i][j] += M[i][j] * d;
            printf("%d", T[i][j]);
            if(j < n-1) printf(" ");
        }
        printf("\n");
    }
    return 0;
}