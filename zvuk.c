#include<stdio.h>
void vypocet(int m);
int vzdalenost,rychlost = 330;
int main()
{
printf("zadejte vzdalenost v metrech vypocitam cas za ktery zvuk tuto vzdalenost urazi\n");
scanf("%d",&vzdalenost);
vypocet(vzdalenost);
return 0;
}

void vypocet(int m)
{
int cas;
cas = m/rychlost;
printf("cas je %d sekund\n",cas);
}
