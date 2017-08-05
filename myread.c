#include<stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[])
{
if (argc != 2)
{
    puts("zadejte jmeno souboru");    
}
FILE *fp;
char ch;
if ((fp = fopen(argv[1],"r")) == NULL)
{
    puts("soubor se nepodařilo otevřít");
    exit(1);    
}
while ((ch = fgetc(fp)) != 255) putchar(ch);
fclose(fp);
return 0;    
}
