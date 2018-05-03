#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define ST '#'
#define BL '.'
int main(int argc, char *argv[]) {
int x, y, r;
if (argc != 2) {
    puts("Spatny pocet argumentu\nzadejte polomer");    
    exit(1);
}
r = atoi(argv[1]);
for (y = -r; y <= r; y++) {
    for (x = -r; x <= r; x++) {
        if ((sqrt(pow(x,2) + pow(y,2))) <= r)
            putchar(ST);    
        else
            putchar(BL);
    }
    putchar('\n');
}
return 0;    
}
