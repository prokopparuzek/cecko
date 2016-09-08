#include<stdio.h>
int prompt(char *str,char *in);
int main()
{
char str[80];
prompt("zadej retezrc\n",str);
printf("%s\n",str);
return 0;
}

int prompt(char *str,char *in)
{
printf(str);
scanf(" %[^\n]s",in);
}
