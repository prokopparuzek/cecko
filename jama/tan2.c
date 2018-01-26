#include<stdio.h>
#include<math.h>
int main()
{
int i;
for (i = 1; i < 1000; i++){
    if ((int)pow(i,2) % 2)
        printf("%d\n",(int)pow(i,2));        
}
return 0;
}
