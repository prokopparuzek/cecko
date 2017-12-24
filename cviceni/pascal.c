#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
struct troj 
{
    int pred[33];
    int po[33];    
    int n;
} pas;
pas.n = 0;
if (argc != 2)
{
    puts("Chybny pocet argumentu");
    exit(1);    
}
pas.n = atoi(argv[1]);
if (pas.n > 31)
{
    puts("Moc velky trojuhelnik"); 
    exit(2);   
}
return 0;    
}
