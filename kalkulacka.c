#include<stdio.h>
#include<string.h>
void napoveda(void);
char prikaz[81];
double x,y,z;
int main()
{
for(;;)
{
	prikaz[0] = 0;
	z = 0;
	printf("operace?\n");
	scanf(" %80[^\n]s",prikaz);;
	if(!strcmp(prikaz,"konec")) break;
	else if(!strcmp(prikaz,"zobraz napovedu"))
	{
		napoveda();
		continue;
	}
	printf("zadejte prvni cislo\n");
	scanf("%lf",&x);
	printf("zadejte druhe cislo\n");
	scanf("%lf",&y);
	if(!strcmp(prikaz,"scitani")) printf("vysledek je %f\n",x+y);
	else if(!strcmp(prikaz,"odcitani")) printf("vysledek je %f\n",x-y);
	else if(!strcmp(prikaz,"nasobeni")) printf("vysledek je %f\n",x*y);
	else if(!strcmp(prikaz,"deleni")){
		z = y?x/y:0;
		printf("vysledek je %f\n",z);
	}
	else if(!strcmp(prikaz,"modulo\n")){
		z = y?(int)x%(int)y:0;
		printf("vysledek je %i\n",z);
	}
	else printf("neznamy prikaz\n");
}
return 0;
}

void napoveda()
{
printf("scitani - +\n");
printf("odcitani - -\n");
printf("nasobeni - *\n");
printf("deleni - /\n");
printf("modulo - %\n");
}
