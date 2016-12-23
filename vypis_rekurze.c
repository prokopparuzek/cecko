#include<stdio.h>
void vypis(int i);
char *str = "ahoj svete";
int main()
{
vypis(0);
printf("\n");
return 0;
}

void vypis(int i)
{
int a = i;
if(*(str + i)){
	printf("%c",*(str + i));
	vypis(i+1);
}
}
