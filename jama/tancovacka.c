#include<stdio.h>
#include<math.h>
int test(unsigned int n)
{
    long double m;
    m = 2 * n + 1;
    m = sqrt(m);
    if ((m - (unsigned int)m) == 0)
        return 1;
    else
        return 0;
}
int main()
{
unsigned int i;
for (i = 1;; i += 2){
    printf("%d\n",i);
    if (test(i)){
        printf("Nalezeno %u\n",i);
        break;
    }
}
return 0;    
}
