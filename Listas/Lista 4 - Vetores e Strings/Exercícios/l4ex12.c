#include <stdio.h>

void vsort(long long int * v, int size) {
    int i_menor, temp, i;
    int i_ord, k;
    for(i_ord=0;i_ord<(size-1);i_ord++)
    {
        i_menor = i_ord;
        for(k=i_ord+1;k<size;k++) if(v[k] < v[i_menor]) i_menor = k;

        temp = v[i_menor];
        v[i_menor] = v[i_ord];
        v[i_ord] = temp;
    }
}

double calc_mediana(long long int * v, int size) {
    double mediana;
    if(size%2 == 0) mediana = (v[size/2 - 1] + v[size/2])/2.0;
    else mediana = v[size/2];
    return mediana;
}

int main() {
    int N, i;
    double mediana;
    scanf("%d", &N);
    long long int v[N];
    for(i=0;i<N;i++) scanf("%lld", &v[i]);
    vsort(v, N);
    mediana = calc_mediana(v, N);
    printf("%.2lf\n", mediana);
    return 0;
}