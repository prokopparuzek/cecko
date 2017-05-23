#include <stdio.h>
#define HRACI 11
int min(void);
int max(void);
double avg(void);
char jmena[HRACI][31];
double prumer[HRACI];
int main()
{
int i;
puts("zadejte uspesnost hraci,ve formatu jmeno prumer, jmeno max 30 znaku");
for (i = 0; i < HRACI; i++)
{
    scanf("%30s %lf",jmena[i],prumer + i);
}
printf("nejhorsi hrac %s:%lf\n",&jmena[min()][0],prumer[min()]);
printf("nejlepsi hrac %s:%lf\n",&jmena[max()][0],prumer[max()]);
printf("prumer tymu %lf\n",avg());
return 0;    
}

int min()
{
int i, y = 0;
for (i = 0; i < HRACI; i++)
{
    if (prumer[y] > prumer[i]) y = i;
}
return y;    
}

int max()
{
int i, y = 0;
for (i = 0; i < HRACI; i++)
{
    if (prumer[y] <  prumer[i]) y = i;
}
return y;    
}

double avg()
{
double sum = 0;
int i;
for (i = 0; i < HRACI; i++)
    sum += prumer[i];
return sum / HRACI;
}
