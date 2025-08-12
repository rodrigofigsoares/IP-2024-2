#include <stdio.h>

int main() {
    int N, i;
    while(1)
    {
        scanf("%d", &N);
        if(N >= 1 && N <= 1000) break;
    }

    int V[N], K, contador = 0;
    for(i=0;i<N;i++) scanf("%d", &V[i]);
    scanf("%d", &K);
    for(i=0;i<N;i++) if(K <= V[i]) contador++;
    printf("%d\n", contador);
    return 0;
}