#include<stdio.h>
#include<stdlib.h>
#define ST '#'
int main(int argc, char *argv[]) {
int a, x, y;
if (argc != 2) {
    puts("Spatny pocet arg\nzadej delku strany");
    exit(1);   
}
a = atoi(argv[1]);
for (y = 0; y < a; y++) {
    for (x = 0; x < a; x++)
        putchar(ST);
    putchar('\n');    
}
return 0;
}
