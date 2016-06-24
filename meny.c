#include<stdio.h>
float vstup,vystup;
int ZobrazMenu(void);
int main()
{
char volba;
do{
volba = ZobrazMenu();

switch(volba)
{
case 1:
	printf("zadejte metry\n");
	scanf("%f",&vstup);
	vystup = vstup/1000;
	printf("vysledek je %f\n",vystup);
	break;
case 2:
	printf("zadejte kilometry\n");
	scanf("%f",&vstup);
	vystup = vstup*1000;
	printf("vysledek je %f\n",vystup);
	break;
case 3:
	printf("zadejte metry\n");
	scanf("%f",&vstup);
	vystup = vstup*100;
	printf("vysledek je %f\n",vystup);
	break;
case 4:
	printf("zadejte centimetry");
	scanf("%f",&vstup);
	vystup = vstup/100;
	printf("vysledek je %f\n",vystup);
	break;
case 5:
	break;
	default:
	printf("error\n");
	break;
}
}while(volba != 5);
return 0;
}

int ZobrazMenu(){
	int a;
	printf("prevod\n1. m na km\n2. km na m\n3. m na cm\n4. cm na m\n5. konec\nzadejte cislo volby\n");
	scanf("%d",&a);
	return a;
}


