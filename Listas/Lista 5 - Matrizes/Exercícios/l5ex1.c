#include <stdio.h>

int main() {
    int M[2][2];
    int i, j;
    double det;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    det = M[0][0] * M[1][1] - M[0][1] * M[1][0];
    printf("%.2lf\n", det);
    return 0;
}