#include <stdio.h>

#define N 500000

int main() {
    int q1, q2, qT, qtd, i, j, k;
    int v1[N], v2[N], vr[2*N];
    scanf("%d%d", &q1, &q2);
    qtd = qT = q1 + q2;
    for(i=0;i<q1;i++) scanf("%d", &v1[i]);
    for(i=0;i<q2;i++) scanf("%d", &v2[i]);
    i = 0;
    j = 0;
    k = 0;
    while(qtd--)
    {
        if(v1[i] <= v2[j] || j == q2)
        {
            vr[k] = v1[i];
            k++;
            i++;
        }
        else if(v2[j] <= v1[i] || i == q1)
        {
            vr[k] = v2[j];
            k++;
            j++;
        }
    }
    for(i=0;i<qT;i++)
    {
        printf("%d\n", vr[i]);
    }
    return 0;
}