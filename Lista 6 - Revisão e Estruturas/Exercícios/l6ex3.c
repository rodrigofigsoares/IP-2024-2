#include <stdio.h>
#include <string.h>
    
#define max_char 32+1
#define brasil "Feliz Natal!"
#define alemanha "Frohliche Weihnachten!"
#define austria "Frohe Weihnacht!"
#define coreia "Chuk Sung Tan!"
#define espanha "Feliz Navidad!"
#define grecia "Kala Christougena!"
#define estados_unidos "Merry Christmas!"
#define inglaterra "Merry Christmas!"
#define australia "Merry Christmas!"
#define portugal "Feliz Natal!"
#define suecia "God Jul!"
#define turquia "Mutlu Noeller"
#define argentina "Feliz Navidad!"
#define chile "Feliz Navidad!"
#define mexico "Feliz Navidad!"
#define antardida "Merry Christmas!"
#define canada "Merry Christmas!"
#define irlanda "Nollaig Shona Dhuit!"
#define belgica "Zalig Kerstfeest!"
#define italia "Buon Natale!"
#define libia "Buon Natale!"
#define siria "Milad Mubarak!"
#define marrocos "Milad Mubarak!"
#define japao "Merii Kurisumasu!"
    
int main() {
    char str[max_char];
    while(scanf("%s", str) != EOF)
    {
        if(strcmp(str, "brasil") == 0) printf("%s\n", brasil);
        else if(strcmp(str, "alemanha") == 0) printf("%s\n", alemanha);
        else if(strcmp(str, "austria") == 0) printf("%s\n", austria);
        else if(strcmp(str, "coreia") == 0) printf("%s\n", coreia);
        else if(strcmp(str, "espanha") == 0) printf("%s\n", espanha);
        else if(strcmp(str, "grecia") == 0) printf("%s\n", grecia);
        else if(strcmp(str, "estados-unidos") == 0) printf("%s\n", estados_unidos);
        else if(strcmp(str, "inglaterra") == 0) printf("%s\n", inglaterra);
        else if(strcmp(str, "australia") == 0) printf("%s\n", australia);
        else if(strcmp(str, "portugal") == 0) printf("%s\n", portugal);
        else if(strcmp(str, "suecia") == 0) printf("%s\n", suecia);
        else if(strcmp(str, "turquia") == 0) printf("%s\n", turquia);
        else if(strcmp(str, "argentina") == 0) printf("%s\n", argentina);
        else if(strcmp(str, "chile") == 0) printf("%s\n", chile);
        else if(strcmp(str, "mexico") == 0) printf("%s\n", mexico);
        else if(strcmp(str, "antardida") == 0) printf("%s\n", antardida);
        else if(strcmp(str, "canada") == 0) printf("%s\n", canada);
        else if(strcmp(str, "irlanda") == 0) printf("%s\n", irlanda);
        else if(strcmp(str, "belgica") == 0) printf("%s\n", belgica);
        else if(strcmp(str, "italia") == 0) printf("%s\n", italia);
        else if(strcmp(str, "libia") == 0) printf("%s\n", libia);
        else if(strcmp(str, "siria") == 0) printf("%s\n", siria);
        else if(strcmp(str, "marrocos") == 0) printf("%s\n", marrocos);
        else if(strcmp(str, "japao") == 0) printf("%s\n", japao);
        else printf("-- NOT FOUND --\n");
    }
    return 0;
}