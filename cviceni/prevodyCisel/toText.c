#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char* str;
    int num;
} map;

char *toText(map table[], int num);

int main(int argc, char **argv) {
    map table[] = {
        {"nula", 0},
        {"jedna", 1},
        {"dva", 2},
        {"tři", 3},
        {"čtyři", 4},
        {"pět", 5},
        {"šest", 6},
        {"sedm", 7},
        {"osm", 8},
        {"devět", 9},
        {"deset", 10},
        {"jedenáct", 11},
        {"dvanáct", 12},
        {"třináct", 13},
        {"čtrnáct", 14},
        {"patnáct", 15},
        {"šestnáct", 16},
        {"sedmnáct", 17},
        {"osmnáct", 18},
        {"devatenáct", 19},
        {"dvacet", 20},
        {"třicet", 30},
        {"čtyricet", 40},
        {"padesát", 50},
        {"šedesát", 60},
        {"sedmdesát", 70},
        {"osmdesát", 80},
        {"devadesát", 90},
        {"sto", 100},
        {"dvě stě", 200},
        {"tři sta", 300},
        {"čtyři sta", 400},
        {"pět set", 500},
        {"šest set", 600},
        {"sedm set", 700},
        {"osm set", 800},
        {"devět set", 900},
        {"tisíc", 1000},
        {"dva tisíce", 2000},
        {"tři tisíce", 3000},
        {"čtyři tisíce", 4000},
        {"pět tisíc", 5000},
        {"šest tisíc", 6000},
        {"sedm tisíc", 7000},
        {"osm tisíc", 8000},
        {"devět tisíc", 9000}
    };
    if (argc != 2) {
        puts("Špatný počet argumentů!\nPoužití: číslo na převod je jediný argument.");
        exit(1);
    }
    char *ans = toText(table, atoi(argv[1]));
    printf("%s\n",ans);
    free(ans);
    return 0;
}

char *toText(map table[], int num) {
    char *str = malloc(4);
    int i, count = 4;
    str[0] = '\0';
    if (num > 9999 || num < 0) {
        puts("Moc velké||malé číslo!");
        exit(2);
    }
    while (num) {
        for (i = 45; table[i].num > num; i--);
        if (strlen(table[i].str) > (count - strlen(str) + 2))
            str = realloc(str, count *= 4);
        if (*str != '\0')
            strcat(str, " ");
        strcat(str, table[i].str);
        num -= table[i].num;
    }
    return str;
}
