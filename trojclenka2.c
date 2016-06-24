#include <stdio.h>
int vyhodnoceni();
int trojclenka1();
int trojclenka2();
int trojclenka3();
int trojclenka4();
void tisk_napovedy();

int vybrane_cislo;
double a;
double b;
double c;
double x;
char znak;
int main(void) 
{
	scanf("%c",&znak);
	if(znak == 63) tisk_napovedy();
	else
	{
		vybrane_cislo = znak;
		scanf("%lf",&a);
		scanf("%lf",&b);
		scanf("%lf",&c);
	vyhodnoceni();
	}

	return 0;
}

int vyhodnoceni () //vyhodnoceni zapisu
{
	if (vybrane_cislo == 49) trojclenka1();
	if (vybrane_cislo == 50) trojclenka2();
	if (vybrane_cislo == 51) trojclenka3();
	if (vybrane_cislo == 52) trojclenka4();
	if (vybrane_cislo < 49 || vybrane_cislo > 52)
	{
		printf("\nerror\n");
		return 0;
	}
}

int trojclenka1() //spocitani
{
	x = a*(c/b);
	printf("x = %lf\n",x);
	return 0;
}

int trojclenka2() //spocitani
{
	x = b*(c/a);
	printf("x = %lf\n",x);
	return 0;
}

int trojclenka3() //spocitani
{
	x = a*(b/c);
	printf("x = %lf\n",x);
	return 0;
}

int trojclenka4() //spocitani
{
	x = b*(a/c);
	printf("x = %lf\n",x);
	return 0;
}

void tisk_napovedy()
{
	printf("prima umera, x prvni, napis 1\n");
	printf("prima umera, x druhe, napis 2\n");
	printf("neprima umera, x prvni, napis 3\n");
	printf("neprima umera, x druhe, napis 4\n");	
	printf("napis cisla podle vzorce\n");
	printf("  1.........2\n");
	printf("x(1)......x(2)\n");
	printf("misto pozadovaneho x nevyplnuj, na druhe dosad 3 cislo\n");
	printf("cisla pis za sebou\n");
}
