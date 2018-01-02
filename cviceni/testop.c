// 0 = Hospoda
// 1 = Doma
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define OPIL  'o'
#define CES '_'
struct opilec{
    int max;
    int k;
    int p;
    char *cesta;    
} op;
int opilec(struct opilec *opl){
int i; 
for (i = opl->k - 1; i != 0 && i != opl->max - 1;) {
    int r = 0;
    opl->cesta[i] = CES;
    r = rand() % 100;
    if (r < opl->p) i--;
    else i++;
    opl->cesta[i] = OPIL;
    //puts(opl->cesta);
    if (i == 0) return 0;
    else if (i == (opl->max - 1)) return 1;
}
}
int main(int argc, char *argv[])
{
int i, test, kolik;
struct{
    int doma;
    int hospoda;    
} vys = {0,0};
if (argc != 5) {
    puts("Chybny pocet argumentu!");
    exit(1);  
}
srand((unsigned int) time(NULL));
op.max = atoi(argv[1]);
op.k = atoi(argv[2]);
op.p = atoi(argv[3]);
kolik = atoi(argv[4]);
char str[op.max + 1];
op.cesta = str;
for (i = 0; i < kolik; i++){
	memset(op.cesta,'_',op.max);
	op.cesta[op.max] = 0;
	*(op.cesta + (op.k - 1)) = OPIL;
    test = opilec(&op);
    if (test)
        vys.doma++;
    else
        vys.hospoda++;
	//puts(op.cesta);
}
printf("Doma: %d\nHospoda: %d\n",vys.doma,vys.hospoda);
return 0;
}

