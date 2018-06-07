#include<stdio.h>
#include<stdlib.h>
#define CER '#'
#define BLA '.'

int main(int argc, char **argv) {
    if (argc != 3) {
        puts("Chybny pocet argumentu\nZadejte ve tvaru:\nrozmer; pocatecni znak(#||.)");
        exit(1);    
    }
    if (*argv[2] != '.' && *argv[2] != '#') {
        puts("Sachovnice neni z techto znaku");
        exit(2);    
    }
    int x, y, poc;
    for (y = 0; y < atoi(argv[1]); y++) {
        poc = y % 2?argv[2][0] == CER?BLA:CER:argv[2][0];
        for (x = 0; x < atoi(argv[1]); x++) {
                putchar(poc);
                poc = poc == CER?BLA:CER;
        }    
        putchar('\n');
    }
    return 0;
}
