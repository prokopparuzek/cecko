#include<stdio.h>
#include<string.h>
char bigstr[201];
char str[51];
int a,b,c;
int main(){
	for(;;){
		printf("zadejte retezec\n");
		scanf(" %50[^\n]s",str);
		if(!strcmp(str,"konec")) break;
		a = strlen(str);
		b = strlen(bigstr);
		c = 200 - b;
		if(a>c) break;
		else{
			strcat(bigstr,str);
			strcat(bigstr,"\n");
		}
		strcpy(str, "");
	}
	printf("toto jste celkove zapsali\n%s",bigstr);
	return 0;
}
