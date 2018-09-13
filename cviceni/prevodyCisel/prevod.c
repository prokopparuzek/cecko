/*
 *Převádí čísla mezi soustavami
 * */
/*
 *Zatím pouze z desítkové do dalších, max 36.
 * */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define TONUM 48
#define TOCHAR 55

char *reverse(char *s);
char *fromDec(int number, int base);

int main(int argc, char **argv) {
    char *fin =  fromDec(atoi(argv[1]), atoi(argv[2])); 
    printf("%s\n", fin);
    free(fin);
    return 0;
}

char *fromDec(int number, int base) {
    base = abs(base);
    int count, loc = 1; // loc určuje znaménko 1 = +; 2 = -
    if (base > 36) {
        puts("Moc velký základ!");
        exit(1);    
    }
    if (number < 0) {
        number = abs(number);
        loc++;
    }
    if (base == 1) {
        for (count = 0; count < number; count++);
        char *str = malloc(count + loc);
        char *p_s = str;
        if (loc == 2) *p_s++ = '-';
        p_s = memset(p_s,'1',count);
        return str;    
    }
    for (count = 0; number > pow(base, count); count++);
    char *str = malloc(count + loc);
    char *p_s = str;
    while (number) {
        *p_s++ = number % base + ((number % base) <= 9? TONUM: TOCHAR);
        number /= base;    
    }
    if (loc == 2) *p_s++ = '-';
    *p_s = '\0';
    str = reverse(str);
    return str;
}

char *reverse(char *s) {
    char *start, *end;    
    char swap;
    for (start = s, end = s + strlen(s) - 1; start <= end; start++, end--) {
        swap = *end;
        *end = *start;
        *start = swap;
    }
    return s;
}
