#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define OPIL  'o'
#define CES '_'
int main(int argc, char *argv[])
{
int max, k, p, i;
char cesta[max + 1];
if (argc != 4) {
    puts("Chybny pocet argumentu!");
    exit(1);  
}
max = atoi(argv[1]);
k = atoi(argv[2]);
p = atoi(argv[3]);
memset(cesta,'_',max);
cesta[max + 1] = 0;
*(cesta + (k - 1)) = OPIL;
srand((unsigned int) time(NULL));
for (i = k - 1; i != 0 && i != max - 1;) {
    int r = 0;
    cesta[i] = CES;
    r = rand() % 100;
    if (r < p) i--;
    else i++;
    cesta[i] = OPIL;
    puts(cesta);
}
//if (i) exit(1);
//else exit(0);
if (i == 0) puts("Hospoda");
else puts("Doma");
return 0;
}