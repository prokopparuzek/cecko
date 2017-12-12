#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int tr[2][31], n, i, x;
if (argc != 2)
{
    puts("Chybny pocet argumentu");
    exit(1);    
}
n = atoi(argv[1]);
if (n > 31)
{
    puts("Moc velky trojuhelnik"); 
    exit(2);   
}
for (i = 0; i < n; i++)
{
    
}
return 0;    
}
