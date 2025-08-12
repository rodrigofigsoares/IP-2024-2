#include <stdio.h>
    
int main() {
    int n, i, temp, contador = 0;
    scanf("%d", &n);
    
    if(n<0)
    {
        printf("Numero invalido!");
        return 0;
    } else if (n == 1 || n == 0) contador++;
    for(i=1;i<=n;i++)
    {
        temp = n/i;
        
        if(n%i == 0 && temp != 1 && temp != n)
        {
            contador++;
        }
    } if(contador == 0)
    {
        printf("PRIMO\n");
    } else printf("NAO PRIMO\n"); 
    return 0;
}