#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
FILE *fp;
int count = 0;
if (argc != 2)
{
    puts("zadejte soubor");
    exit(1);    
}
if ((fp = fopen(argv[1],"rb")) == NULL)
{
    puts("soubor nelze otevřít");
    exit(1);    
}
do {
    fgetc(fp);
    if (!feof(fp)) count ++;
} while (!feof(fp));
printf("%d bytů\n",count);
return 0;    
}
