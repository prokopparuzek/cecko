#include<stdio.h>
int a,*p_a;
int main()
{
p_a = &a;
*p_a = 100;
printf("%d,%d\n",*p_a,p_a);
return 0;
}
