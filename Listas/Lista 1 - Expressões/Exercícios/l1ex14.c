#include <stdio.h>

int main() {
    int num;
    float C, D, U;
    int newnum;
    int ctrldigit;

    scanf("%d", &num);

    C = num/100;

    int C2, D2, U2;

    C2 = C;
    D = (num-C2*100)/10;
    D2 = D;
    U = (num-C2*100-D2*10);
    U2 = U;
    newnum = C2 + D2*3 + U2*5;
    ctrldigit = newnum % 7;

    if(num>999) {
        printf("Erro! O número precisa ter 3 algarismos\n");
    } else {
        if(num<100) {
            printf("Erro! O número precisa ter 3 algarismos\n");
        } else {
        
            printf("O NOVO NUMERO E = %d%d\n", num, ctrldigit);
        }
    }

    return 0;
}