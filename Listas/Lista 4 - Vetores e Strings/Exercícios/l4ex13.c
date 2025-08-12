#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 499

char * novaString(int tam, char * str) {
    char * newstr = (char*)malloc(tam+1);
    if(tam == 0) return NULL;
    if(tam > strlen(str)) return str;
    strncpy(newstr, str, tam);
    return newstr;
}

int main() {
    int n, k, temp;
    char str[N+1], *newstr;
    scanf("%d%*c", &n);
    while(n--)
    {
        scanf("%d%*c%[^\n]%*c", &k, str);
        newstr = novaString(k, str);
        if(newstr != NULL) printf("%s", newstr);
        printf("\n");
    }
    return 0;
}