#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int c;
FILE *fp;
if (argc != 2)
{
    puts("Chybny pocet argumentu!");
    exit(1);    
}
if ((fp = fopen(argv[1],"r")) == NULL)
{
    printf("Nelze otevrit soubor %s pro cteni!\n",argv[1]);
    exit(2);   
}
while ((c = fgetc(fp)) != EOF) putchar(c);
fclose(fp);
return 0;    
}
