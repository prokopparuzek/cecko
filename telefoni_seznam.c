#include<stdio.h>
#include<string.h>
char seznam [2][2][51] = 
{
"jana","787977978",
"ivan","687686683"
 };
char vstup [51];
int i;
int main()
{
printf("zadejte jmeno\n");
scanf(" %50[^\n]s",&vstup);
for(;i < 2;i++){
	if(!strcmp(vstup,&seznam[i][0][0])){
		printf("%s\n",&seznam[i][1][0]);
		break;	
	}
	else continue;
}
return 0;
}
