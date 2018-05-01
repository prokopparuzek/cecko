#include<stdio.h>
int test(void);
int main()
{
int i;
for (i = 0; i < 2; i++)
    printf("%d\n",test());
return 0;    
}

int test()
{
static int x = 1;
printf("test = %d\n",x);
x = 0;    
return x;
}
