#include <stdio.h>

typedef struct {
    double r, i;
} Complex;

int main() {
    FILE * arq = fopen("Complex", "rb");
    Complex nums[3];
    fread(nums, sizeof(Complex), 3, arq);
    for(int i=0;i<3;i++)
    {
        printf("%.2lf + %.2lfi\n", nums[i].r, nums[i].i);
    }
    fclose(arq);
    return 0;
}