#include <stdio.h>

#define N 6

int main() {
    int M[N][N];
    int i, j, maior, ampulheta;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    i = 0;
    j = 0;
    ampulheta = M[i][j] + M[i][j+1] + M[i][j+2] + M[i+1][j+1] + M[i+2][j] + M[i+2][j+1] + M[i+2][j+2];
    maior = ampulheta;
    while(1)
    {
        j++;
        if(j+2 == N)
        {
            j = 0;
            i++;
            if(i+2 == N) break;
        }
        ampulheta = M[i][j] + M[i][j+1] + M[i][j+2] + M[i+1][j+1] + M[i+2][j] + M[i+2][j+1] + M[i+2][j+2];
        if(ampulheta > maior) maior = ampulheta;
    }
    printf("%d\n", maior);
    return 0;
}