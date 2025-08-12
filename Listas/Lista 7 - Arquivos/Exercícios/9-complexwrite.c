#include <stdio.h>

typedef struct {
    double r, i;
} Complex;

int main() {
    FILE * arq = fopen("Complex", "wb");
    Complex nums[3];
    int i;
    for(i=0;i<3;i++) scanf("%lf%lf", &nums[i].r, &nums[i].i);
    fwrite(nums, sizeof(Complex), 3, arq);
    fclose(arq);
    return 0;
}