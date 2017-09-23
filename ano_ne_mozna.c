#include<stdio.h>
int main()
{
char *p[3] = {"ano" , "ne" , "mozna"};
char vstup[201];
printf("zadejte dotaz do 200, rad odpovim\n");
scanf(" %200[^\n]s",vstup);
printf("%s\n",p[strlen(vstup) % 3]);
return 0;
}
