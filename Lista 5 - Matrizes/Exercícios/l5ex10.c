#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define N 1000

void findWally(int M[][N], int n, int m) {
    int i, j, armL, armR, legs, head;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(M[i][j] == 1111)
            {
                if(j-1 < 0)
                {
                    armL = M[i][m-1];
                    armR = M[i][j+1];
                }
                else if(j+1 == m)
                {
                    armR = M[i][0];
                    armL = M[i][j-1];
                }
                else
                {
                    armR = M[i][j+1];
                    armL = M[i][j-1];
                }
                if(i-1 < 0)
                {
                    legs = M[i+1][j];
                    head = M[n-1][j];
                }
                else if(i+1 == n)
                {
                    legs = M[0][j];
                    head = M[i-1][j];
                }
                else
                {
                    legs = M[i+1][j];
                    head = M[i-1][j];
                }
                if(M[i][j] == 1111 && armR == 0 && armL == 0 && legs == 8 && head == 4)
                {
                    printf("%d %d\n", i, j);
                    exit(0);
                }
            }
        }
    }
    printf("WALLY NAO ESTA NA MATRIZ\n");
}

int main() {
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    int M[N][N];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    findWally(M, n, m);
    return 0;
}