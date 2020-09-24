/*
Převod z desítkové do binární soustavy a zpět
rozhoduje se podle názvu programu toBin/toDec
funguje u kladných čísel do velikosti 64 bitu
číslo zadejte jako argument
číslo je třeba mít bez bílých znaků
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define BIN "toBin"
#define DEC "toDec"

char *toBin(u_int64_t d);
u_int64_t toDec(char* b);
_Bool isBin(char c);

int main(int argc, char *argv[])  {
    if (argc == 2) {
        if (strcmp(argv[0],BIN) == 0) {
            // test zda obsahuje pouze čísla
            for (char *test = argv[1]; *test; test++) {
                if (!isdigit(*test) && !(*test == '-' && test == argv[1])) {
                    puts("Není číslo");
                    exit(1);
                }
            }
            printf("%s\n",toBin(atoi(argv[1])));    
        } else if (strcmp(argv[0],DEC) == 0) {
            printf("%lu\n",toDec(argv[1]));    
        } else {
            puts("Spatny nazev programu");
            exit(1);    
        }
    } else {
        puts("Spatny pocet argumentu");
    }
    return 0;
}

char *toBin(u_int64_t d) {
    static char b[65];
    int i = 63;

    memset(b,'0',64);
    b[64] = '\0';
    // Převod
    while (d != 0) {
        b[i--] = d % 2 + '0';
        d /= 2;
    }
    return b;
}

u_int64_t toDec(char* b) {
    u_int64_t d = 0;

    // Převod
    for (int i = 0; i < strlen(b)  && i < 64; i++) {
        // test zda obsahuje pouze 0 a 1
        if (!isBin(b[i])) {
            puts("Není binární číslo");
            exit(1);
        }
        d += pow(2, strlen(b) - 1 - i) * (b[i] - '0');
    }
    return d;
}

_Bool isBin(char c) {
    return c == '0' || c == '1';
}
