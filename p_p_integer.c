#include<stdio.h>
int main()
{
int i,*p_i,**p_p_i;
p_i = &i;
p_p_i = &p_i;
**p_p_i = 10;
printf("%d, %p, %p, %p\n",i,&i,&p_i,p_p_i);
return 0;
}
