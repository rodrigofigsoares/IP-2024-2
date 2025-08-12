#include <stdio.h>

unsigned long long int fatorial(unsigned long int x) {
    unsigned long int fat = 1;

    while(x>1)
    {
        fat *= x;
        x -= 1;
    }
    return fat;
}

int main() {
    int inicial, final, n, p = 0, C, pFat, nFat, nMENOSp, nMENOSpFat;
    scanf("%d %d", &inicial, &final);

    n = inicial;

    if(inicial == 0 && final == 0)
    {
        printf("1\n");
        return 0;
    }
    while(n <= final)
    {
        while(p <= n)
        {
            pFat = fatorial(p);
            nFat = fatorial(n);
            nMENOSp = n - p;
            nMENOSpFat = fatorial(nMENOSp);
            C = nFat/(pFat*nMENOSpFat);
            if(n == 0 && p == 0) 
            {
                printf("1\n");
                break;
            }
            p++;
            printf("%d", C);
            if(p <= n) printf(",");
            else printf("\n");
        }
        p = 0;
        n++;
    }
    return 0;
}