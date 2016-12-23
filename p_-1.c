#include<stdio.h>
void zmena(float *p_x);
int main()
{
float i, *p_i;
p_i = &i;
zmena(p_i);
printf("%f\n",i);
return 0;
}

void zmena(float *p_x)
{
*p_x = -1.12;
}
