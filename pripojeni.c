#include<stdio.h>
#include<string.h>
char heslo[] = "bimba";
char vstup[51];
int i;
int main(){
printf("zadejte heslo\n");
for(;i < 3;i++){
	scanf(" %51[^\n]s",vstup);	
	if(!strcmp(vstup,heslo)){
		printf("uspesne prihlaseni\n");
		break;
	}
	else if (strcmp(heslo,vstup) && i < 2) printf("zkus to znovu\n");
	else printf("prihlaseni neprobehlo uspesne\n");
}
return 0;
}
