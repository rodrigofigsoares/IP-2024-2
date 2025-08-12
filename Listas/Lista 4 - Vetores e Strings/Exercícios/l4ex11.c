#include <stdio.h>

#define N 1000000

int main() {
    int n, v[N+1], i, j, maior, freq[N+1], maiorFrequencia = 0, maisFrequente = 0, id = 0, qtd = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
        if(v[i] > maior) maior = v[i];
    }
    for(i=0;i<n;i++) freq[i] = 0;
    for(i=0;i<n;i++) for(j=0;j<n;j++) if(v[i] == v[j]) freq[i]++;
    for(i=0;i<n;i++)
    {
        if(freq[i] > maiorFrequencia)
        {
            maiorFrequencia = freq[i];
            maisFrequente = v[i];
            id = i;
        }
        if(freq[i] == maiorFrequencia)
        {
            if(v[i] < v[id])
            {
                maisFrequente = v[i];
                id = i;
            }
        }
    }
    for(i=0;i<n;i++) if(v[i] == maisFrequente) qtd++;
    printf("%d\n%d\n", maisFrequente, qtd);
    return 0;
}