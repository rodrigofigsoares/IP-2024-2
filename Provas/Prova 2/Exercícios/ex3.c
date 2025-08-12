#include <stdio.h>
#include <string.h>
#include <math.h>
    
#define N 1000
    
void freq_strings(char * str1, char * str2, int * freq1, int * freq2, int tam1, int tam2) {
    char perfil[5] = {'a', 'e', 'i', 'o', 'u'};
    int i, j;
    for(i=0;i<tam1;i++) for(j=0;j<5;j++) if(str1[i] == perfil[j] || str1[i] == perfil[j] - 32) freq1[j]++;
    for(i=0;i<tam2;i++) for(j=0;j<5;j++) if(str2[i] == perfil[j] || str2[i] == perfil[j] - 32) freq2[j]++;
}
    
void print_frequencias(int * freq1, int * freq2) {
    int i;
    printf("(");
    for(i=0;i<4;i++) printf("%d,", freq1[i]);
    printf("%d)\n", freq1[i]);
    printf("(");
    for(i=0;i<4;i++) printf("%d,", freq2[i]);
    printf("%d)\n", freq2[i]);
}
    
void dist_perfis(int * freq1, int * freq2) {
    double dist = 0;
    int i;
    for(i=0;i<5;i++)
    {
        dist += pow((freq1[i] - freq2[i]), 2);
    }
    dist = sqrt(dist);
    printf("%.2lf\n", dist);
}
    
int main() {
    char str1[2*(N+1)], str2[N+1];
    int freq1[5] = {0, 0, 0, 0, 0}, freq2[5] = {0, 0, 0, 0, 0};
    int tam1 = 0, tam2, tamT, i, j, contador = 0;
    scanf("%[^\n]%*c", str1);
    tamT = strlen(str1) - 1;
    if(tamT == 0 && str1[0] == ';')
    {
        printf("FORMATO INVALIDO!\n");
        return 0;
    }
    for(i=0;i<tamT+1;i++) if(str1[i] == ';') contador++;
    if(contador == 0 || contador > 1)
    {
        printf("FORMATO INVALIDO!\n");
        return 0;
    }
    i = 0;
    while(1)
    {
        if(str1[i] == ';') break;
        i++;
    }
    tam1 = i;
    str1[i] = '\0';
    j = i+1;
    tam2 = tamT - tam1;
    for(i=0;i<tam2;i++)
    {
        str2[i] = str1[j];
        j++;
    }
    str2[i] = '\0';
    freq_strings(str1, str2, freq1, freq2, tam1, tam2);
    print_frequencias(freq1, freq2);
    dist_perfis(freq1, freq2);
    return 0;
}