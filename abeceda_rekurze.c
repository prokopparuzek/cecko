#include<stdio.h>
void vypis(char x);
int main()
{
vypis('a');
printf("\n");
return 0;
}

void vypis(char x)
{
if(x <= 'z'){
printf("%c",x);
vypis(++x);
}
}
