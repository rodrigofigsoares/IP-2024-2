#include <stdio.h>

int main() {
    int qtd, hip, c1, c2, i;
    scanf("%d", &qtd);

    c1 = 1;
    c2 = qtd - 1;
    hip = 1;

    while(c1<c2)
    {
        if(c1*c1 + c2*c2 == hip*hip)
        {
            printf("hipotenusa = %d, catetos %d e %d\n", hip, c1, c2);
        }
        c1++;
        if(c1 == c2)
        {
            if(c1*c1 + c2*c2 == hip*hip) printf("hipotenusa = %d, catetos %d e %d\n", hip, c1, c2);
            c2--;
            c1 = 1;
        }
        if(c2 == 1)
        {
            hip++;
            c2 = qtd - 1;
            c1 = 1;
        }
        if(hip > qtd) break;
    }
    return 0;
}