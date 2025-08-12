#include <stdio.h>

int main() {
    int n, i;
    double tF, tC;

    scanf("%d", &n);
    i = 0;
    while(i<n)
    {
        scanf("%lf", &tF);
        tC = 5*(tF - 32)/9;
        printf("%.2lf FAHRENHEIT EQUIVALE A %.2lf CELSIUS\n", tF, tC);
        i++;
    }
    return 0;
}