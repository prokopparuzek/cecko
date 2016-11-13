#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch;
do{
	ch = getchar();
	if(ch == EOF) exit(1);
	if (putchar('.') == EOF) exit(2);
}while(ch != '\n');
putchar('\n');
return 0;
}
