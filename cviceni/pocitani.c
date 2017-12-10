#include<stdio.h>
#include<math.h>
unsigned int soucet(int);
int fakt(int);
int odm(int);
int cifS(int);
int poc1(int);
int pozp(int);
char *jeRod(unsigned long);
int main()
{
unsigned long in = 0;
puts("zadejte cele cislo");
scanf("%lu",&in);
printf("Soucet prvnich %d cisel = %u\n",in,soucet(in));
printf("Faktorial %d = %d\n",in,fakt(in));
printf("Odmocnina %d je %d\n",in,odm(in));
printf("Ciferny soucet %d je %d\n",in, cifS(in));
printf("V cisle %d je %d jedna\n",in,poc1(in));
printf("Cislo %d je pozpatku %d\n",in,pozp(in));
printf("Cislo %lu/%lu %s platne rodne cislo\n",in / 10000, in % 10000, jeRod(in));
return 0;    
}

unsigned int soucet(int in)
{
    unsigned int i, num = 0;
    for (i = 1; i <= in; i++) num += i; 
    return num;
}

int fakt(int in)
{
    if (in > 12) puts("Faktorial je chybne!");
    int i, num = 1;
    for (i = 1; i <= in; i++) num *=i;
    return num; 
}
 int odm(int in)
 {
 return sqrt((double) in); 
 }

int cifS(int in)
{
    int c = 0;
    while (in != 0)
    {
        c += in % 10;
        in /= 10; 
    }
    return c;
}

int poc1(int in)
{
    int c,s = 0;
    while (in != 0)
    {
        c = in % 10;
        s += (c == 1)?1:0; 
        in /= 10;
    }
    return s;    
}

int pozp(int in)
{
    int c, po = 0;
    while (in != 0)
    {
        c = in % 10;
        po += c;
        in /= 10;    
        if (in != 0)
            po *= 10;
    }
    return po;
}

char *jeRod(unsigned long in)
{
    char *odp[22] = {"je","neni"};
    return odp[(in % 11) == 0?0:1];    
}
