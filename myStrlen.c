#include<stdio.h>
int myStrlen (char *p);
int main()
{
char str[81];
scanf(" %80[^\n]s",str);
printf("%d\n",myStrlen(str));
return 0;
}

int myStrlen(char *p)
{
int i = 0;
while(*p)
{
	i++;
	p+=1;
}
return i;
}
