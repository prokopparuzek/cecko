#include<stdio.h>
void vypln(int delka);
void vypis(int delka);
void serad(int delka);
int pole[5],test = 1,prohozeni,i,delka = 5;
int main()
{
printf("pole ma delku 5\n");
printf("zadej cislice\n");
vypln(delka);
printf("serazuji\n");
serad(delka);
printf("toto jsou serazena cisla\n");
vypis(delka);
return 0;
}

void vypln(int delka)
{
	for(i = 0; i < delka;i++){
		scanf("%d",&pole[i]);
	}
}

void vypis(int delka)
{
for(i = 0;i<delka;i++){
	printf("%d\n",pole[i]);
}
}

void serad(int delka)
{
while(test)
{
	for(i = 0;i<delka;i++){
		if(pole[i]<pole[i+1] || pole[i]==pole[i+1])
		{
			test = 0;
			printf("neprohazuji\n");
			printf("%d, %d\n",pole[i],pole[i+1]);
		}
		if(pole[i]>pole[i++]){
			printf("prohazuji\n");
			prohozeni = pole[i];
			pole[i] = pole[i++];
			pole[i++]=pole[i];
			test = 1;
		}
	}
}
}
