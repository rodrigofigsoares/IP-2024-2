#include <stdio.h>

int main() {
    int num;
    float C, D, U;

    scanf("%d", &num);

    C = num/100;

    int C2, D2, U2;

    C2 = C;
    D = (num-C2*100)/10;
    D2 = D;
    U = (num-C2*100-D2*10);
    U2 = U;

    if(num>999) {
        printf("Erro! O número precisa ter 3 algarismos\n");
    } else {
        if(num<100) {
            printf("Erro! O número precisa ter 3 algarismos\n");
        } else {
        
            printf("%d%d%d\n", U2, D2, C2);
        }
    }

    return 0;
}