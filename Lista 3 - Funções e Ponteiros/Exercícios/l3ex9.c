#include <stdio.h>
    
void converteEmNotasMoedas(int *total, int *cem, int *cinquenta, int *dez, int *moedas) {
    int t = *total;
    *cem = t/100;
    *cinquenta = (t%100)/50;
    *dez = ((t%100)%50)/10;
    *moedas = ((t%100)%50)%10;
}
int main() {
    int *t, *c, *cinq, *d, *m;
    int total, cem, cinquenta, dez, moedas;
    scanf("%d", &total);
    t = &total;
    c = &cem;
    cinq = &cinquenta;
    d = &dez;
    m = &moedas;
    converteEmNotasMoedas(t, c, cinq, d, m);
    printf("NOTAS DE 100 = %d\n", *c);
    printf("NOTAS DE 50 = %d\n", *cinq);
    printf("NOTAS DE 10 = %d\n", *d);
    printf("MOEDAS DE 1 = %d\n", *m);
    return 0;
}