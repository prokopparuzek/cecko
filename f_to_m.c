#include<stdio.h>
double m_to_feet(double f);
int main(void)
{
double feet;
printf("zadejte stopy: ");
scanf("%lf",&feet);
printf("\n%lf stop = %lf metru\n",feet,m_to_feet(feet));
return 0;
}

double m_to_feet(f)
float f;
{
return f / 3.28;
}
