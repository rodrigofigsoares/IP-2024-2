#include <stdio.h>

#define N 50

void dancing(char * str) {
    int i = 0;
    if(*str > 96 && *str < 123) *str -= 32;
    str++;
    i++;
    while(*str != '\0')
    {
        if(i%2 != 0) 
        {
            if(*str > 64 && *str < 91)
            {
                *str += 32;
            }
        }
        else
        {
            if(*str > 96 && *str < 123)
            {
                *str -= 32;
            } 
        }
        str++;
        if(*str != 32) i++;
    }
}

int main() {
    char str[N+1];
    while(scanf("%[^\n]%*c", str) != EOF)
    {
        dancing(str);
        printf("%s\n", str);
    }
    return 0;
}