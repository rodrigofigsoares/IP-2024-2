#include <stdio.h>
    
#define N 10
    
int main() {
    double A[N][N], M[N][N], B[N][N];
    int n, k, i, j, l;
    scanf("%d", &n);
    scanf("%d", &k);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%lf", &A[i][j]);
    for(i=0;i<n;i++) for(j=0;j<n;j++) M[i][j] = 0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(l=0;l<n;l++)
            {
                M[i][j] += A[i][l] * A[l][j];
            }
        }
    }
    while(k-2)
    {
        for(i=0;i<n;i++) for(j=0;j<n;j++) B[i][j] = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(l=0;l<n;l++)
                {
                    B[i][j] += M[i][l] * A[l][j];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                M[i][j] = B[i][j];
            }
        }
        k--;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j < n-1) printf("%.3lf ", M[i][j]);
            else printf("%.3lf\n", M[i][j]);
        }
    }
    return 0;
}