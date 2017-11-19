#include<stdio.h>
#include<string.h>
int main()
{
char *p[3] = {"ano" , "ne" , "mozna"};
char vstup[201];
while (1)
{
    printf("zadejte dotaz do 200, rad odpovim, nebo 'q' pro ukonceni\n");
    scanf(" %200[^\n]s",vstup);
    if (!strcmp(vstup,"q")) break;
    printf("%s\n",p[strlen(vstup) % 3]);
}
return 0;
}
