#include <stdio.h>
    
unsigned long long int fatorial(unsigned long long int x) {
    unsigned long long int fat = 1;
    while(x>1){
        fat *= x;
        x--;
    }
    return fat;
}
int main() {
    unsigned long long int n;
    scanf("%llu", &n);
    printf("%llu! = %llu\n", n, fatorial(n));
    return 0;
}