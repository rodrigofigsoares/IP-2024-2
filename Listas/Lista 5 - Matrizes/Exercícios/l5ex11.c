#include <stdio.h>

#define N 10

int main() {
    int l, c, i, j, i0 = 0, j0 = 0, contador, dif = 0, first = 0;
    int M[N][N];
    scanf("%d%d", &l, &c);
    if(l > 10 || l < 1 || c > 10 || c < 1)
    {
        printf("dimensao invalida\n");
        return 0;
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    for(i0=0;i0<l;i0++)
    {
        for(j0=0;j0<c;j0++)
        {
            contador = 0;
            for(i=0;i<l;i++)
            {
                for(j=0;j<c;j++)
                {
                    if((i0 != i || j0 != j) && M[i0][j0] == M[i][j]) contador++;
                }
            }
            if(contador == 0)
            {
                if(first == 0)
                {
                    printf("%d", M[i0][j0]);
                    first++;
                }
                else printf(",%d", M[i0][j0]);
                dif++;
            }
        }
    }
    if(dif == 0) printf("sem elementos unicos");
    printf("\n");
    return 0;
}