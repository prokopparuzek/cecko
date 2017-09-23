#include<stdio.h>
int main()
{
char jm1[21],jm2[21];
char *kre, *pri;
kre = jm1;
pri = jm2;
printf("zadejte sve jmeno\n");
scanf(" %20s %20s",kre,pri);
printf("%s %s\n",kre,pri);
return 0;
}
