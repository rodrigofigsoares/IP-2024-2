#include <stdio.h>

#define N 100

int main() {
    int l, a, b, n, i = 0, j;
    scanf("%d%d%d%d", &l, &a, &b, &n);
    printf("P2\n");
    printf("%d %d\n", l, a);
    printf("255\n");
    while(1)
    {
        if(i == a) break;
        if(i < b || i >= a-b)
        {
            for(j=0;j<l;j++) printf("%d ", n);
        }
        else
        {
            for(j=0;j<b;j++) printf("%d ", n);
            for(j=b;j<l-b;j++) printf("0 ");
            for(j=l-b;j<l;j++) printf("%d ", n);
        }
        if(j == l) printf("\n");
        i++;
    }
    return 0;
}