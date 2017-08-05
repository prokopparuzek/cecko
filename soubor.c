/*
!!!!
fputc() při konci souboru vrací 255
!!!
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char *str = "ahoj Bimbo\n";
char *p;
FILE *fp;
if ((fp = fopen("bimba.txt","w")) == NULL)
{
    printf("soubor se nepodařilo otevřít\n");
    exit(1);    
}
p = str;
while (*p)
{
    if (fputc(*p++,fp) == EOF)
    {
        puts("chyba při zápisu do souboru");
        exit (1);    
    }
}
fclose (fp);
if ((fp = fopen("bimba.txt","r")) == NULL)
{
    puts("chyba při otevření souboru");
    exit (1);    
}
char ch;
int i;
while ((ch = fgetc(fp)) != 255) 
{
    putchar (ch);
}
fclose (fp);
return 0;    
}
