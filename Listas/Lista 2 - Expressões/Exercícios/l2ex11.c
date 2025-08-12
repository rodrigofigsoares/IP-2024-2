#include <stdio.h>

int main() {
    unsigned long int n, i, f;
    scanf("%lu", &n);

    if(n == 0 || n == 1) 
    {
        printf("%lu! = 1\n", n);
        return 0;
    }

    f = n;

    printf("%lu! = ", n);

    while(n>1)
    {
        f = f*(n-1);
        n = n-1;
    } printf("%lu\n", f);
    f = 0;
    return 0;
}