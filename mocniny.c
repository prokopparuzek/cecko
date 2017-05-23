#include<stdio.h>
int co,vysledek;
int na_co;
int i;
int main()
{
printf("zapis x^y\n");
scanf("%d%*c",&co);
scanf("%d",&na_co);
vysledek = co*co;
for(i = 2;i < na_co;i++)
{
	vysledek = vysledek*co;
}
printf("vysledek je %d\n",vysledek);
return 0;
}
