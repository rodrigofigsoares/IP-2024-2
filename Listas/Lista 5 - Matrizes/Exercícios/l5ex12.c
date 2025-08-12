#include <stdio.h>

#define N 1000

int main() {
    int A[N][N];
    int l, c, i, j, maior, menor, freqMaior = 0, freqMenor = 0;
    double total;
    scanf("%d%d", &l, &c);
    total = l*c;
    scanf("%d", &A[0][0]);
    maior = A[0][0];
    menor = A[0][0];
    for(i=0;i<l;i++)
    {
        if(i == 0)
        {
            for(j=1;j<c;j++)
            {
                scanf("%d", &A[i][j]);
                if(A[i][j] > maior) maior = A[i][j];
                if(A[i][j] < menor) menor = A[i][j];
            }
        }
        else
        {
            for(j=0;j<c;j++)
            {
                scanf("%d", &A[i][j]);
                if(A[i][j] > maior) maior = A[i][j];
                if(A[i][j] < menor) menor = A[i][j];
            }
        }
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            if(A[i][j] == maior) freqMaior++;
            if(A[i][j] == menor) freqMenor++;
        }
    }
    printf("%d %.2lf%%\n", menor, freqMenor*100/total);
    printf("%d %.2lf%%\n", maior, freqMaior*100/total);
    return 0;
}