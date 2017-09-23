#include<stdio.h>
#define MAX 100
#define COUNTBY 3
int main()
{
int i;
for(i = 0;i < MAX - 1;i += COUNTBY) printf("%i\n",i);
return 0;
}
