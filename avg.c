#include<stdio.h>
float avg(float *x);
int main()
{
float vstup[5] ={1.8,1.9,76.979,4.987,12.9};
int i;
printf ("zadej 5 cisel\n");
printf("%f\n",avg(vstup));
return 0;
}

float avg(float *x)
{
float y = 0;
int i = 0;
for(i;i < 5;i++){
	y += x[i];
}
return y / 5;
}
