#include <stdio.h>

int main() {
    int N, i, j, maior, qtd;
    while(1)
    {
        maior = 0;
        scanf("%d", &N);
        if(N == 0) break;
        int v[N];
        for(i=0;i<N;i++) 
        {
            scanf("%d", &v[i]);
            if(v[i] > maior) maior = v[i];
        }
        for(i=0;i<=maior;i++)
        {
            qtd = 0;
            printf("(%d) ", i);
            for(j=0;j<N;j++)
            {
                if(v[j] <= i) qtd++;
            }
            printf("%d\n", qtd);
        }
    }
    return 0;
}