#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int V[N], i, contador = 0;
    for(i=0;i<N;i++)
    {
        scanf("%d", &V[i]);
        if(V[i]%2 == 0)
        {
            printf("%d ", V[i]);
            contador++;
        }
    }
    printf("%d\n", contador);
    return 0;
}