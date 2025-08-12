#include <stdio.h>
#include <math.h>

int main() {
    float num;
    float a3, a2, a1;
    scanf("%f", &num);

    a3 = round(num*1000)/1000;
    a2 = round(num*100)/100;
    a1 = round(num*10)/10;

    printf("%.6f\n", a1);
    printf("%.6f\n", a2);
    printf("%.6f\n", a3);
    return 0;
}