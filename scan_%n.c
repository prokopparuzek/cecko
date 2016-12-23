#include<stdio.h>
int main()
{
char str[81];
double x;
int y,n,*i;
i = &n;
scanf(" %80s %f %i%n",str,&x,&y,i);
printf("%d\n",*i);
return 0;    
}
