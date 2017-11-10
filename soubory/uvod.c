// EOF je int nutno porovnavat s intem
#include<stdio.h>
#include<stdlib.h>
int main()
{
char *str = "Hello world\n",*p;
FILE* fp;
int c;
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
        exit(3);
}
while ((c = fgetc(fp)) != EOF) putchar(c);
fclose(fp);
return 0;    
}
