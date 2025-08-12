#include <stdio.h>
#include <math.h>
    
int next_power(int num, int exp) {
    int i, pot, dist, menor = num, temp;
    for(i=0;i<=num;i++)
    {
        pot = pow(i, exp);
        dist = num - pot;
        if(dist < 0) dist = -dist;
        if(dist < menor)
        {
            menor = dist;
            temp = i;
        }
    }
    return temp;
}
int main() {
    int n, p;
    scanf("%d%d", &n, &p);
    if(p == 0)
    {
        printf("p != 0\n");
        return 0;
    }
    printf("%d -> %d^%d = %.0lf\n", n, next_power(n, p), p, pow((next_power(n, p)), p));
    return 0;
}