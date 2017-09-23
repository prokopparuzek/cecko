#include<stdio.h>
#include<string.h>
void up(char *p);
int main()
{
printf("zadejte retezec do 80 znaku\n");
char s[80];
scanf(" %80[^\n]s",s);
up(s);
printf("%s\n",s);
return 0;
}

void up(char *p)
{
int i,x = strlen(p);
for(i = 0;i < x;i++){
	*(p+i) = toupper(*(p+i));
}
}
