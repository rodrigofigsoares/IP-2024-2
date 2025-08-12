#include <stdio.h>

#define N 1000

int main() {
    int n, i, j;
    int M[N][N];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == j) printf("%d\n", M[i][j]);
        }
    }
    return 0;
}