#include<stdio.h>
int main()
{
struct
{
    unsigned long int cislo;
    unsigned long int pocet;
    unsigned long int nejvic;    
    int nejp[100000];
} nej = {1,1,0};
unsigned long n, i, j;
int sem = 1;
for (j = 1; j <= 100000; j++)
{
    n = j;
    for (i = 0; n != 1; i++)
    {
        if (n % 2) n = n * 3 + 1;  
        else n /= 2;
    }
    nej.nejp[j - 1] = ++i;
    for (i = 0; i < j - 1; i++)
    {
        if ( nej.nejp[i] >= nej.nejp[j - 1]) sem = 0;    
    }
    if (sem) printf("%lu\n",j);
    sem = 1;
}
return 0;
}
