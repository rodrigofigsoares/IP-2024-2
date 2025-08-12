#include <stdio.h>
 
int main() {
    float num;
    float a3, a2, a1;
    scanf("%f", &num);
 
    a3 = (int)(num*1000 + 0.5);
    a2 = (int)(num*100 + 0.5);
    a1 = (int)(num*10 + 0.5);

    printf("%.6f\n", a1 / 10);
    printf("%.6f\n", a2 / 100);
    printf("%.6f\n", a3 / 1000);

    return 0;
}