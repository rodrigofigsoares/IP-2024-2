#include <stdio.h>

unsigned long long int fibonacci(int t1, int t2, int p) {
unsigned long long int contador = 2, anterior, atual, temp;
while(contador < p)
{
    anterior = t1;
    atual = t2;
    temp = atual + anterior;
    t2 = temp;
    t1 = t2-anterior;
    contador++;
}
return t2;
}
int main() {
int n1, n2, pos;
scanf("%d%d%d", &n1, &n2, &pos);
printf("%llu\n", fibonacci(n1, n2, pos));
return 0;
}