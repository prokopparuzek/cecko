#include<stdio.h>
#include<limits.h>
int c,s,i,l,f,d,ld,ll;
int main()
{
c = sizeof(char);
s = sizeof(short int);
i = sizeof(int);
l = sizeof(long int);
ll = sizeof(long long int);
f = sizeof(float);
d = sizeof(double);
ld = sizeof(long double);
printf("%d,%d,%d,%d,%d,%d,%d,%d\n",c,s,i,l,ll,f,d,ld);
return 0;
}
