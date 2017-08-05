#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char *argv[])
{
char count[26],ch;
FILE *fp;
int i;
if (argc != 2)
{
    puts("zadejte soubor");
    exit(1);    
}
for(i = 0; i < 26; i++) count[i] = 0;
if ((fp = fopen(argv[1],"r")) == NULL)
{
    puts("soubor nelze otevřít");
    exit(1);    
}
while ((ch = fgetc(fp)) != 255)
{
    if (isalpha(ch))
    {
        ch = tolower(ch);    
        ch -= 97;
        count[ch]++; 
    }
}
fclose(fp);
for (i = 65; i < (91); i++)
{
    printf("%c  ",i);    
}
putchar(10);
for (i = 0; i < 26; i++)
{
    printf("%-3d",count[i]);    
}
putchar(10);
return 0;    
}
