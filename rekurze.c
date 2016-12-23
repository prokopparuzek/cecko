#include<stdio.h>
void rekurze(int i);
int main()
{
rekurze(0);
printf("\n");
return 0;
}

void rekurze(int i)
{
if(i < 10){
	rekurze(i+1);
	printf("%d",i);
}
}
