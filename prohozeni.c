#include<stdio.h>
void prohod(int *p_c1,int *p_c2);
int main()
{
int c1 = 76, c2 = 87;
prohod(&c1,&c2);
printf("%d,%d\n",c1,c2);
return 0;
}

void prohod(int *p_c1,int *p_c2)
{
int c;
c = *p_c1;
*p_c1 = *p_c2;
*p_c2 = c;    
}
