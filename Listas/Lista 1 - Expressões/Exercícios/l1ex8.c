#include <stdio.h>

int main() {
    int h, m, s;
    int hts, mts, T;
    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);

    hts = h*3600;
    mts = m*60;
    T = hts + mts + s;

    printf("O TEMPO EM SEGUNDOS E = %d\n", T);
    return 0;
}