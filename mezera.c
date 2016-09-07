#include<stdio.h>
int main()
{
char str[81], *p_str;
scanf(" %80[^\n]s",str);
p_str = str;
while(*p_str){
	if(*p_str == ' ') break;
	p_str++;
}
p_str++;
printf("%s\n",p_str);
return 0;
}
