#include<stdio.h>
#include<stdlib.h>
#define ST '#'
#define BL ' '
int main(int argc, char *argv[]) {
int h, y, b, s = 1, i, j;
if (argc != 2) {
    puts("Chybny pocet argumentu\n zadejte 1");
    exit(1);   
}
h = atoi(argv[1]);
b = h / 2;
for (i = 0; i < h; i++) {
    for (j = abs(b); j > 0; j--) { 
        putchar(BL);
    }
    for(j = s; j > 0; j--) {
        putchar(ST);    
    }
    putchar('\n');
    b--;
    s = s + (b < 0?-2:2);
}
return 0;    
}
