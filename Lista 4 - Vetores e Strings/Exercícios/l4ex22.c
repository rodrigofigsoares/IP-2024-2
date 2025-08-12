#include <stdio.h>
#include <string.h>

#define N 256

void str_clean(char * str, char * clear) {
    char newstr[N];
    int i, j = 0;
    int tamClear = strlen(clear);
    while(1)
    {
        if(*str == '\0') break;
        for(i=0;i<tamClear;i++) if(*str == clear[i]) *str = 00;
        str++;
        j++;
    }
    *str = '\n';
    str -= j;
    i = 0;
    while(1)
    {
        if(*str == '\n') break;
        else if(*str != 00)
        {
            newstr[i] = *str;
            i++;
        }
        str++;
    }
    newstr[i] = '\0';
    i = 0;
    str -= j;
    while(1)
    {
        if(newstr[i] == '\0') break;
        else *str = newstr[i];
        i++;
        str++;
    }
    *str = '\0';
}

int main() {
    char str[N+1], clear[N+1];
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", clear);
    str_clean(str, clear);
    printf("%s\n", str);
    return 0;
}