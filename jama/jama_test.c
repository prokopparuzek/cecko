#include<stdio.h>
int main()
{
int x,y,p;
scanf("%i",&x);
while(x >= 1){
    p = x % 10;
    y += p;
    x /= 10;    
}
printf("%d\n",y);
return 0;    
}
