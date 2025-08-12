#include <stdio.h>

int main() {

    int n;
    int a1, a2, a3, a4, a5, a6, a7, a8;
    int r2, r3, r4, r5, r6, r7, r8;
    scanf("%d", &n);

    if(n>255) {
        printf("Numero invalido!");
        return 0;
    }
    if(n<0) {
        printf("Numero invalido!");
        return 0;
    }
    if(n<2) {
        printf("%.8d", n);
        return 0;
    }
    if(n>1) {
        a1 = n;
        a2 = a1/2;
        r2 = a1%2;
        a3 = a2/2;
        r3 = a2%2;
        a4 = a3/2;
        r4 = a3%2;
        a5 = a4/2;
        r5 = a4%2;
        a6 = a5/2;
        r6 = a5%2;
        a7 = a6/2;
        r7 = a6%2;
        a8 = a7/2;
        r8 = a7%2;

        printf("%d%d%d%d%d%d%d%d", a8, r8, r7, r6, r5, r4, r3, r2);
        return 0;
    }
}
