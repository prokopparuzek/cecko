#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MIN 2
#define MAX 1000
#define SIZE 5
int main()
{
int i = MIN;
int count = 0;
for (i; i <= MAX; i++)
{
    int test, je = 1;
    for (test = 2; test <= sqrt (fabs((double)i)); test++)
    {
        if ((i % test) == 0)
        {
            je = 0;
            break;    
        }
    }
    if (je)
    {   
        if (count < SIZE) printf("%4d\t",i);
        else printf("%4d\n",i);
        count = ++count % (SIZE + 1);
    }    
}
return 0;    
}
