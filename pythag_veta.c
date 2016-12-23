#include<stdio.h>
#include<math.h>
double hypo(double a,double b);
int main()
{
double a,b;
printf("zadejte delky odvesen\n");
scanf("%lf%lf",&a,&b);
printf("%f\n",hypo(a,b));
return 0;
}

double hypo(double a,double b)
{
return sqrt(pow(a,2) + pow(b,2));
}
