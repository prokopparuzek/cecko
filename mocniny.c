#include<stdio.h>
int co,vysledek;
int na_co;
int main()
{
printf("zapis x^y\n");
scanf("%d",&co);
scanf("%d",&na_co);
vysledek = co*co;
for(int i = 2;i < na_co;i++)
{
	vysledek = vysledek*co;
}
printf("vysledek je %d\n",vysledek);
return 0;
}
