#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct table{
    char character;
    int number;
};

struct table map[] = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

char *toRoman(int);
int toArab(char *);
int getNum(char c);

int main(int argc, char **argv) {
    if (argc != 3) {
        puts("Chybný počet argumentů!");
        exit(1);
    }
    switch (*argv[1]) {
        case 'r':
//            toRoman(atoi(argv[2]));
            break;
        case 'a':
            toArab(argv[2]);
            break;
        default:
            puts("Chybný argument\nZadej r|| a!");
            exit(2);
            break;
    }
}

int toArab(char *rim) {
    char *s = rim;
    int arab = 0;
    while (*s != '\0') {
        *s = toupper(*s);
        s++;
    }
    s = rim;
    while (*s != '\0') {
        if (getNum(*s) < (*(s + 1)?getNum(*(s + 1)):0)) {
            arab += getNum(*(s + 1)) - getNum(*s);
            s += 2;
        }
        else {
            arab += getNum(*s);
            s++;
        }
    }
    printf("%d\n", arab);
}

int getNum(char c){
    int i;
    for (i = 0; i < 7; i++) {
        if (c == map[i].character)
            return map[i].number;
        else
            continue;
    }
    puts("Číslo není římské!");
    exit(3);
}
