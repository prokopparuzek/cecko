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
#include <ctype.h>
#define TONUM 48
#define TOCHAR 55

typedef struct {
    int *array;
    int count;
} Array;

char *reverse(char *s);
char *fromDec(int number, int base);
Array parse(char *str);
int toNum(char c);
int toDec(char *str, int base);

int main(int argc, char **argv) {
    if (argc != 4) {
        puts("Špatný počet argumentů!");
        exit(3);    
    }
    char *str = fromDec(toDec(argv[1], atoi(argv[2])), atoi(argv[3]));
    printf("%s\n",str);
    free(str);
    return 0;
}

char *fromDec(int number, int base) {
    base = abs(base);
    int count, loc = 1; // loc určuje znaménko 1 = +; 2 = -
    if (base > 36 || base <= 1) {
        puts("Chybný základ!");
        exit(1);    
    }
    if (number < 0) {
        number = abs(number);
        loc++;
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

Array parse(char *str) {
    Array num;
    num.array = malloc(strlen(str));
    num.count = strlen(str);
    int i;
    for (i = 0; i < strlen(str); i++) {
        num.array[i] = toNum(str[i]);    
    }
    return num;
}

int toNum(char c) {
    if (isdigit(c))
        return c - TONUM;
    else if (isalpha(c)) {
        c = toupper(c);
        return c - TOCHAR;    
    }
    else {
        printf("%c není číslo!\n",c);
        exit(2);
    }
}

int toDec(char *str, int base) {
    base = abs(base);
    int loc = 0; // loc určuje znaménko 0 = +; 1 = -
    if (base > 36 || base <= 1) {
        puts("Chybný základ!");
        exit(1);    
    }
    if (*str == '-') {
        str++;
        loc++;
    }

    Array numA = parse(str);
    int i, num = 0;
    for (i = 0; i < numA.count; i++) {
        if (numA.array[i] >= base) {
            puts("Číslo nepatří do vstupní soustavy");
            exit(4);    
        }
        num += numA.array[i] * pow(base, numA.count - i - 1); 
    }
    free(numA.array);
    num = loc?-num:num;
    return num;
}
