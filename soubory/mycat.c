#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int c, i;
FILE *fp;
if (argc < 2)
{
    puts("Chybny pocet argumentu!");
    exit(1);    
}
for (i = 1; i < argc; i++)
{
    if ((fp = fopen(argv[i],"r")) == NULL)
    {
        printf("Nelze otevrit soubor %s pro cteni!\n",argv[i]);
        continue;   
    }
    while (!feof(fp))
    {
        c = fgetc(fp);
        if (ferror(fp))
        {
            printf("Chyba v souboru %s\n",argv[1]);
            continue;   
        }
        putchar(c);
    }
    fclose(fp);
}
return 0;    
}
