/*
Převod z desítkové do binární soustavy a zpět
rozhoduje se podle nazvu programu
funguje u cisel do velikosti 16 bitu
cislo zadejte jako argument
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define BIN "toBin"
#define DEC "toDec"
char *toBin(unsigned short d);
short toDec(char* b);
int main(int argc, char *argv[])  {
if (argc == 2)
    if (strcmp(argv[0],BIN) == 0) {
        printf("%s\n",toBin(atoi(argv[1])));    
    }
    else if (strcmp(argv[0],DEC) == 0) {
        printf("%d\n",toDec(argv[1]));    
    }
    else {
        puts("Spatny nazev programu");
        exit(1);    
    }
else
    puts("Spatny pocet argumentu");
return 0;
}

char *toBin(unsigned short d) {
static char b[17];
char i = 15;
memset(b,'0',16);
b[16] = '\0';
while (d != 0) {
    b[i--] = d % 2 + '0';
    d /= 2;
}
return b;
}

short toDec(char* b) {
short d = 0;
char i;
for (i = 0; i < strlen(b)  && i < 16; i++)
    d += pow(2, strlen(b) - 1 - i) * (b[i] - '0');
return d;
}
