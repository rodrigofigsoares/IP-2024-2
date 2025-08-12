#include <stdio.h>

int main() {
    int qtd, n1, n2, c1, c2, d1, d2, u1, u2, newnum1, newnum2;
    scanf("%d", &qtd);

    while(qtd>0)
    {
        scanf("%d%d", &n1, &n2);

        if(n1 == n2) break;

        c1 = n1/100;
        c2 = n2/100;
        d1 = n1%100/10;
        d2 = n2%100/10;
        u1 = (n1%100)%10;
        u2 = (n2%100)%10;

        if(c1 == 0 || c2 == 0 || d1 == 0 || d2 == 0 || u1 == 0 || u2 == 0) break;

        newnum1 = u1*100 + d1*10 + c1;
        newnum2 = u2*100 + d2*10 + c2;

        if(newnum1 > newnum2) printf("%d\n", newnum1);
        else printf("%d\n", newnum2);

        qtd--;
    }
    return 0;
}