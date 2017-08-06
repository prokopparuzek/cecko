#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
FILE *fp1, *fp2;
char ch;
if (argc < 3 )
{
    puts("zadejte jména souborů");
    exit(1);    
}
if (argc == 4)
{
    if (strcmp(argv[3],"watch"))
    {
        puts("špatný argument");
        exit(1);    
    }
}
if (argc > 4)
{
    puts("moc argumentů");
    exit(1);    
}
if ((fp1 = fopen(argv[1],"r")) == NULL)
{
    puts("soubor 1 se nepodařilo otevřít");
    exit(1);    
}
if ((fp2 = fopen(argv[2],"w")) == NULL)
{
    puts("soubor 2 se nepodařilo otevřít");
    exit(1);    
}
while ((ch = fgetc(fp1)) != 255)
{
    fputc(ch,fp2);
    if (argc == 4) putchar(ch);    
}
fclose(fp1);
fclose(fp2);
return 0;    
}
