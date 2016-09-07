#include<stdio.h>
void fak(int x, unsigned long int *y);
int main()
{
int x;
unsigned long int y = 1, *p_y;
p_y = &y;
printf("zadej cislo vypocitam faktorial\n");
scanf("%d",&x);
fak(x,p_y);
printf("%lu\n",y);
return 0;
}

void fak(int x,unsigned long int *y)
{
if(x){
	*y *=x;
	x--;
	fak(x,y);
}
}
