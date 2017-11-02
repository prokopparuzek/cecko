// fgetc() pri konci souboru vraci 255 ne EOF
#include<stdio.h>
#include<stdlib.h>
int main()
{
char *str = "Hello world\n",*p;
FILE* fp;
char c;
p = str;
if ((fp = fopen("uvod.txt","w")) == NULL)
{
        puts("Nepodarilo se otevrit soubor uvod.txt!");
        exit(1);
}
while (*p)
{
    if (fputc(*p++,fp) == EOF)
    {
        puts("Chyba pri zapisu do souboru uvod.txt");    
        exit(2);
    }
}
fclose(fp);
if ((fp = fopen("uvod.txt","r")) == NULL)
{
        puts("Nepodarilo se otevrit soubor uvod.txt!");
        exit(1);
}
while ((c = fgetc(fp)) != 255) putchar(c);
fclose(fp);
return 0;    
}
