#include <stdio.h>

int main() {
    FILE * arq = fopen("abc", "rb");
    int nums[3], i;
    fread(nums, sizeof(int), 3, arq);
    for(i=2;i>=0;i--) printf("%d\n%c\n", nums[i], (char)nums[i]);
    fclose(arq);
    return 0;
}