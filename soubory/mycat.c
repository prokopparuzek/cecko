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
        exit(2);   
    }
    while ((c = fgetc(fp)) != EOF) putchar(c);
    fclose(fp);
}
return 0;    
}
