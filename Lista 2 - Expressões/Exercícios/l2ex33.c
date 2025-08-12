#include <stdio.h>

int main() {
    int NS, UF, digitoV1, digitoV2;
    int n2, n3, n4, n5, n6, n7, n8, n9;
    scanf("%d%d", &NS, &UF);

    if(UF < 1 || UF > 28)
    {
        printf("CODIGO DA UF INVALIDO!\n");
        return 0;
    }
    
    n2 = NS/10000000;
    n3 = (NS%10000000)/1000000;
    n4 = ((NS%10000000)%1000000)/100000;
    n5 = (((NS%10000000)%1000000)%100000)/10000;
    n6 = ((((NS%10000000)%1000000)%100000)%10000)/1000;
    n7 = (((((NS%10000000)%1000000)%100000)%10000)%1000)/100;
    n8 = ((((((NS%10000000)%1000000)%100000)%10000)%1000)%100)/10;
    n9 = ((((((NS%10000000)%1000000)%100000)%10000)%1000)%100)%10;
    
    digitoV1 = (n2*2 + n3*3 + n4*4 + n5*5 + n6*6 + n7*7 + n8*8 + n9*9)%11;
    if(digitoV1 == 10) digitoV1 = 0;
    else if(digitoV1 == 0) digitoV1 = 0;

    digitoV2 = ((UF/10)*7 + (UF%10)*8 + (digitoV1*9))%11;
    if(digitoV2 == 10) digitoV2 = 0;
    else if(digitoV2 == 0) digitoV2 = 0;

    printf("%d%02d/%d%d\n", NS, UF, digitoV1, digitoV2);
    return 0;
}