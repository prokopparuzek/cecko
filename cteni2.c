#include<stdio.h>
int main()
{
char str [21];
scanf("%*[0-9] %20s",str);
puts(str);
return 0;    
}
