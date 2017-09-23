#include<stdio.h>
float avg(int len,float pole[]);
int main()
{
float pole[] = {1.7,7.9,3.9,8.5,1.69};
printf("%f\n",avg(5,pole));
return 0;
}

float avg(int len,float *pole)
{
int i;
float sum = 0;
for(i = 0;i < len;i++){
	sum = sum + pole[i];
}
return sum/len;
}
