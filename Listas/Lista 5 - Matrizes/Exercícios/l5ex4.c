#include <stdio.h>
    
int main() {
    double M[2][2];
    int i, j;
    double a, b, c, d;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    a = M[0][0] * M[0][0] + M[0][1] * M[1][0];
    b = M[0][0] * M[0][1] + M[0][1] *  M[1][1];
    c = M[1][0] * M[0][0] + M[1][1] * M[1][0];
    d = M[1][0] * M[0][1] + M[1][1] * M[1][1];
    printf("%.3lf %.3lf\n%.3lf %.3lf\n", a, b, c, d);
    return 0;
}