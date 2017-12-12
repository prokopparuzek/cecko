#include<stdio.h>
int main()
{
unsigned long n, i = 0;
puts("Zadejte prirozene cislo");
scanf("%lu",&n);
for (i; n != 1; i++)
{
    printf("%lu\n",n);
    if (n % 2) n = n * 3 + 1;  
    else n /= 2;
}
printf("Dokonceno na %lu kroku\n",i);
return 0;
}
