#include<stdio.h>
int main()
{
struct
{
    unsigned long int cislo;
    unsigned long int pocet;
    unsigned long int nejvic;    
} nej = {1,1,0};
unsigned long n, i, j, vel = 1;;
for (j = 1; j < 100000; j++)
{
    n = j;
    for (i = 0; n != 1; i++)
    {
        if (n > vel) vel = n;
        if (n % 2) n = n * 3 + 1;  
        else n /= 2;
    }
    if (i > nej.pocet)
    {
        nej.cislo = j;
        nej.pocet = i;   
        nej.nejvic = vel;
    }
}
printf("Nejvice kroku potrebuje cislo %lu:%lu\nNejvetsim cislem bylo %lu\n",nej.cislo,nej.pocet,nej.nejvic);
return 0;
}
