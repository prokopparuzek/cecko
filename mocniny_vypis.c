#include<stdio.h>
#include<math.h>
int main()
{
int i;
for(i = 2;i <= 100;i++){ 
printf("%-7d \t %-7.0f \t %-7.0f\n",i,pow(i,2),pow(i,3));
}
return 0;
}
