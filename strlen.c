#include<stdio.h>
#include<string.h>
char text[101];
int i;
int main()
{
printf("zadej retezec do 100 znaku, zmerim ho\n");
fgets(text,101,stdin);
i = strlen(text);
printf("retezec je dlouhy %d znaku\n",i);
return 0;}
