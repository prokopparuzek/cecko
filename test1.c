#include<stdio.h>
int p,*p_p;
int main()
{
p_p = &p;
p = 1;
printf("%d,%p\n",p,p_p);
(*p_p)++;
printf("%d,%p\n",p,p_p);
return 0;
}
