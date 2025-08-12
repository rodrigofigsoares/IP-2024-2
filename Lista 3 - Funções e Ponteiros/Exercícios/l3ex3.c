#include <stdio.h>
    
int separaDigitos(int num) {
    int p1, p2, p3, newnum;
    p1 = num/100;
    p2 = ((num%100)/10)*10;
    p3 = ((num%100)%10)*100;
    newnum = p1 + p2 + p3;
    return newnum;
}
int main() {;
    int n;
    scanf("%d", &n);
    if(n > 999 || n < 1 || n%10 == 0) return 0;
    else printf("%d\n", separaDigitos(n));
    return 0;
}