#include<stdio.h>
char text[81];
int i;
int main(){
	printf("zadejte retezec\n");
	scanf(" %80[^\n]s",text);
	for(i=80;i>=0;i--){
		printf("%c",text[i]);
	}
	printf("\n");
	return 0;
}
