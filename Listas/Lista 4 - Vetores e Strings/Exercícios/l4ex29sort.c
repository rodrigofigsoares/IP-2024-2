#include <stdio.h>

#define N 500000

void ordena_vetor(int * v, int size) {
    int idP, idMenor, temp, k;
    for(idP=0;idP<size;idP++)
    {
        idMenor = idP;
        for(k=idP+1;k<size;k++) if(v[k] < v[idMenor]) idMenor = k;

        temp = v[idP];
        v[idP] = v[idMenor];
        v[idMenor] = temp;
    }
}

int main() {
    int q1, q2, qT, qtd, i, j = 0, k;
    int v1[N], v2[N], vr[2*N];
    scanf("%d%d", &q1, &q2);
    qtd = qT = q1 + q2;
    for(i=0;i<q1;i++) scanf("%d", &v1[i]);
    for(i=0;i<q2;i++) scanf("%d", &v2[i]);
    for(i=0;i<q1;i++) vr[i] = v1[i];
    for(i=q1;i<qT;i++)
    {
        vr[i] = v2[j];
        j++;
    }
    ordena_vetor(vr, qT);
    for(i=0;i<qT;i++)
    {
        printf("%d\n", vr[i]);
    }
    return 0;
}