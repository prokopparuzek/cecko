#include<stdio.h>
int i,*p_i;
int main()
{
p_i = & i;
for(;i < 10;i++){
	printf("%d\n",*p_i);
}
return 0;
}
