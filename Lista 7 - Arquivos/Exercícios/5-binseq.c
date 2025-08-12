#include <stdio.h>

int main() {
    FILE * arq = fopen("dados", "wb");
    int nums[100], i;
    for(i=0;i<100;i++) nums[i] = i+1;
    fwrite(nums, sizeof(int), 100, arq);
    fclose(arq);
    return 0;
}