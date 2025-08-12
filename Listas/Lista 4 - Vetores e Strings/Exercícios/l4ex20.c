#include <stdio.h>

#define N 1000

void ordena_string(int * v, int tam) {
    int idPos, k, idMenor, temp;
    for(idPos=0;idPos<tam;idPos++)
    {
        idMenor = idPos;
        for(k=idPos+1;k<tam;k++) if(v[k] < v[idMenor]) idMenor = k;
        temp = v[idMenor];
        v[idMenor] = v[idPos];
        v[idPos] = temp;
    }
}

int main() {
    int v[N];
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d", &v[i]);
    ordena_string(v, n);
    for(i=0;i<n;i++)
    {
        if(i == 0) printf("%d\n", v[i]);
        else if(i > 0 && v[i] > v[i-1]) printf("%d\n", v[i]);
    }
    return 0;
}