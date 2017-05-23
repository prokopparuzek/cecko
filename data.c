#include <stdio.h>
int main()
{
char jmeno[51];
char narozeni[9];
char cislo[14];
printf("zadejte vase jmeno\n");
scanf("%50[^\n]s",jmeno);
puts("zadejte datum narozeni ve formatu dd/mm/rr");
scanf("%8s",narozeni);
puts("zadejte vase tel. cislo bez mezer");
scanf("%13s",cislo);
printf("%s\n%s\n%s\n",jmeno,narozeni,cislo);
return 0;    
}
