#include<stdio.h>
void rada(void);
int i;
int dalsi_cislo,predchozi_cislo = 21;
int main()
{
for(i = 0;i<=10;i++)
{
	rada();
}
return 0;
}

void rada()
{
dalsi_cislo = (predchozi_cislo * 1468)%467;
printf("%d\n",dalsi_cislo);
predchozi_cislo = dalsi_cislo;
}
