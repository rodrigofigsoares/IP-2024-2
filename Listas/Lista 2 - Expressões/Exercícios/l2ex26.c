#include <stdio.h>

int main() {
    int n, p1, p2, p3, p4, p5, newnum;
    scanf("%d", &n);
    
    if(n >= 0 && n < 10) printf("PALINDROMO\n");
    else if(n >= 10 && n < 100)
    {
        p1 = n/10;
        p2 = n%10;
        newnum = p2*10 + p1;
        if(newnum == n) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(n >= 100 && n < 1000)
    {
        p1 = n/100;
        p2 = (n%100)/10;
        p3 = (n%100)%10;
        newnum = p3*100 + p2*10 + p1;
        if(newnum == n) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(n >= 1000 && n < 10000)
    {
        p1 = n/1000;
        p2 = (n%1000)/100;
        p3 = ((n%1000)%100)/10;
        p4 = ((n%1000)%100)%10;
        newnum = p4*1000 + p3*100 + p2*10 + p1;
        if(newnum == n) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(n >= 10000 && n < 100000)
    {
        p1 = n/10000;
        p2 = (n%10000)/1000;
        p3 = ((n%10000)%1000)/100;
        p4 = (((n%10000)%1000)%100)/10;
        p5 = (((n%10000)%1000)%100)%10;
        newnum = p5*10000 + p4*1000 + p3*100 + p2*10 + p1;
        if(newnum == n) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(n > 10000 || n < 0) printf("NUMERO INVALIDO\n");

    return 0;
}