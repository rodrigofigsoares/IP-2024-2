#include <stdio.h>
#include <string.h>

#define M 1000

void cript1(char * str, int size) {
    int i;
    for(i=0;i<size;i++)
    {
        if((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)) str[i] += 3;
    }
}

void cript2(char * str, int size) {
    char str2[M+1];
    int i;
    str += size-1;
    for(i=0;i<size;i++)
    {
        str2[i] = *str;
        str--;
    }
    str++;
    for(i=0;i<size;i++) str[i] = str2[i];
    str[i+1] = '\0';
}

void cript3(char * str, int size) {
    int i = size/2;
    str += i;
    while(i<size)
    {
        *str -= 1;
        str++;
        i++;
    }
    str[size] = '\0';
}

int main() {
    int n, size;
    scanf("%d%*c", &n);
    char str[M+1];
    while(n--)
    {
        scanf("%[^\n]%*c", str);
        size = strlen(str);
        cript1(str, size);
        cript2(str, size);
        cript3(str, size);
        printf("%s\n", str);
        str[0] = '\0';
    }
    return 0;
}