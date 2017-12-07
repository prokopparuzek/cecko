#include<stdio.h>
#include<math.h>
int soucet(int);
int fakt(int);
int odm(int);
int main()
{
int in = 0;
puts("zadejte cele cislo");
scanf("%d",&in);
printf("Soucet prvnich %d cisel = %d\n",in,soucet(in));
printf("Faktorial %d = %d\n",in,fakt(in));
printf("Odmocnina %d je %d\n",in,odm(in));
return 0;    
}

int soucet(int in)
{
    int i, num = 0;
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
    int i, cis, num = 0, *pum;
    for (i = 1; in / 10*i; i++);
    cis = i;

}
