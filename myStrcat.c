#include<stdio.h>
void myStrcat(char *to, char *from);
char str[80] = "ahoj ";
char *p = "svete";
int main()
{
myStrcat(str,p);
printf("%s\n",str);
return 0;
}

void myStrcat(char *to, char *from)
{
for(;*to;to++) continue;
for(;*from;from++) *to++ = *from;
}
