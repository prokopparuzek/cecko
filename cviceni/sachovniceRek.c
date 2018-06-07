#include<stdio.h>
#include<stdlib.h>
#define CER '#'
#define BLA '.'

struct line {
    int count;
    int numLine;
    char start;    
};
int sach(struct line a);
int main(int argc, char **argv) {
    if (argc != 3) {
        puts("Chybny pocet argumentu\nZadejte ve tvaru:\nrozmer; pocatecni znak(#||.)");
        exit(1); 
    }
    if (*argv[2] != '.' && *argv[2] != '#') {
        puts("Sachovnice neni z techto znaku");
        exit(2);    
    }
    struct line a;
    a.count = atoi(argv[1]);
    a.numLine = atoi(argv[1]);
    a.start = argv[2][0];
    sach(a);
    return 0;
}

int sach(struct line a) {
if (!a.count)
    return 0;
int i, pole = a.start;
for (i = 0; i < a.numLine; i++) {
    putchar(pole);
    pole = pole == CER?BLA:CER;    
} 
putchar('\n');
a.start = a.start == CER?BLA:CER;
a.count--;
sach(a);
}
