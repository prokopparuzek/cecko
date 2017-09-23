#include<stdio.h>
int rstrlen(int i,char *str);
int main()
{
char str[81];
scanf(" %80[^\n]s",str);
printf("%i\n",rstrlen(0,str));
return 0;
}

int rstrlen(int i,char *str)
{
	if(str[i]) {
		rstrlen(++i,str);
	}
	else if(str[i] == 0) return i++;
}
