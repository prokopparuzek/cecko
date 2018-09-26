#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <regex.h>

struct table{
    char *character;
    int number;
};

struct table map[] = {
    {"I", 1},
    {"IV", 4},
    {"V", 5},
    {"IX", 9},
    {"X", 10},
    {"XL", 40},
    {"L", 50},
    {"XC", 90},
    {"C", 100},
    {"CD", 400},
    {"D", 500},
    {"CM", 900},
    {"M", 1000}
};

char *toRoman(int);
int toArab(char *);
int getNum(char);
int checkArab(int);
int checkRoman(char *);
int upper(char *s);

int main(int argc, char **argv) {
    if (argc != 3) {
        puts("Chybný počet argumentů!");
        exit(1);
    }
    switch (*argv[1]) {
        case 'r':
            checkArab(atoi(argv[2]));
            toRoman(atoi(argv[2]));
            break;
        case 'a':
            upper(argv[2]);
            checkRoman(argv[2]);
            toArab(argv[2]);
            break;
        default:
            puts("Chybný argument\nZadej r || a!");
            exit(2);
            break;
    }
}

int toArab(char *rim) {
    char *s = rim;
    int arab = 0;
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
    char str[2] = {c, '\0'};
    for (i = 0; i < 13; i++) {
        if (!strcmp(str, map[i].character))
            return map[i].number;
        else
            continue;
    }
    puts("Číslo není římské!");
    exit(3);
}

char *toRoman(int ara) {
    int size = 2, num, i;
    char *rim = malloc(size);
    rim[1] = '\0';
    while (ara) {
        for (i = 12; ara < map[i].number; i--);
        if ((strlen(rim) + strlen(map[i].character)) > size - 1) {
            rim = realloc(rim, size *= 2);
        }
        strcat(rim, map[i].character);
        ara -= map[i].number;
    }
    printf("%s\n",rim);
    free(rim);
}

int checkArab(int ara) {
    if (ara >= 4000) {
        puts("Moc velké číslo!");
        exit(4);
    }
    else if (ara <= 0) {
        puts("Moc malé číslo");
        exit(7);
    }
}

int checkRoman(char *rim) {
    regex_t rex;
    int ret;
    ret = regcomp(&rex, "^M\\{0,3\\}\\(CM\\|CD\\|D\\?C\\{0,3\\}\\)\\(XC\\|XL\\|L\\?X\\{0,3\\}\\)\\(IX\\|IV\\|V\\?I\\{0,3\\}\\)$", 0);
    if (ret) {
        puts("Nepodařilo se vytvořit regex!");
        exit(5);
    }
    ret = regexec(&rex, rim, 0, NULL, 0);
    if (!ret) {
        return 0;
    }
    else {
        puts("Není římské číslo");
        exit(6);
    }
    regfree(&rex);
}

int upper(char *s) {
    while (*s != '\0') {
        *s = toupper(*s);
        s++;
    }
}
