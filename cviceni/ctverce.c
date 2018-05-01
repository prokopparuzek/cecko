#include<stdio.h>
#include<stdlib.h>
#define STAR '*'
#define BL ' '
int main(int argc, char *argv[]) {
int count, x, y;
if (argc != 2) {
    puts("Spatny pocet argumentu\n zadejte pocet ctvercu!");
}
count = atoi(argv[1]);
count *= 2;
for (y = -count; y <= count; y++) {
    for (x = -count; x <= count; x++) {
        int a = abs(x), b = abs(y);
        if ((!(a % 2) && (b <= a)) || (!(b % 2) && (a <= b))) {
            putchar(STAR);    
        }
        else {
            putchar(BL);    
        }
    }
    putchar('\n');
}
return 0;
}
