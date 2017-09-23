#include<stdio.h>
void vypln(int delka);
void vypis(int delka);
void serad(int delka);
int pole[5],prohozeni,i,a,b,delka = 5;
int main()
{
printf("pole ma delku 5\n");
printf("zadej cislice\n");
vypln(delka);
printf("toto je pole\n");
vypis(delka);
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
int x,y;
for(a = 1;a<delka;a++)
{
	for(i = delka - 1;i>=a;i--){
		x = pole[i];
		y = pole[i-1];
		 if(x < y){
			printf("prohazuji\n");
			printf("%d %d,",x,y);
			pole[i-1] = x;
			pole[i] = y;
			printf("%d %d\n",x,y);
		}
		else printf("neprohazuji\n");
	}
}
}
