#include<stdio.h>
int i;
int main()
{
for(i=1;i<=100;i++)
{
	if(i%2 == 1)continue;
	printf("%d\n",i);
}
return 0;
}
