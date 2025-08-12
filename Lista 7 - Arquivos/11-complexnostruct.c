#include <stdio.h>

int main() {
    FILE * arq = fopen("abcnostruct", "wb");
    double * r = NULL, * im = NULL;
    double a, b;
    int i;
    for(i=0;i<3;i++)
    {
        scanf("%lf%lf", &a, &b);
        r = &a;
        im = &b;
        fwrite(r, sizeof(double), 1, arq);
        fwrite(im, sizeof(double), 1, arq);
    }
    fclose(arq);
    arq = fopen("abcnostruct", "rb");
    for(i=0;i<3;i++)
    {
        fread(r, sizeof(double), 1, arq);
        fread(im, sizeof(double), 1, arq);
        printf("%.2lf + %.2lfi\n", *r, *im);
    }
    fclose(arq);
    return 0;
}