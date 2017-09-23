#include<stdio.h>
#include<stdlib.h>
int main()
{
int i, seed;
//puts("Zadejte hodnotu seed.");
scanf("%u",&seed);
srand(seed);
for (i = 0; i < 100; i++)
{
    printf("%u\n",(rand() %6) + 1);    
}
return 0;    
}
