#include<stdio.h>
int i = 1,a;
int main()
{
switch(i)
{
case 1:
	a = 1;
case 2:
	a = 2;
	break;
case 3:
	a = 3;
	break;
case 4:
case 5:
	a = 5;
}
printf("%d",a);
return 0;
}
