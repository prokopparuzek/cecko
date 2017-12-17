#include<stdio.h>
int main()
{
struct {
    unsigned int test : 1;
} op = {0};
printf("%d\n",op.test);
return 0;
}
