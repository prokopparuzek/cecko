#include<stdio.h>
int pole[10] = {1,2,3,4,5,6,7,8,9,10};
int i,x;
int main(){
/*printf("zadejte 10 cisel\n");
for(i = 0;i < 10;i++){
	scanf("%d",&pole[i]);
}*/
for(x = 0;x < 2;x++){
	if(!x) printf("suda cisla\n");
	else printf("licha cisla\n");
	for(i = 0;i < 10;i++){
		if(pole[i] % 2 == x) printf("%d",pole[i]);
		else  if(x == pole[i] % 2) printf("%d",pole[i]);
	}
printf("\n");
}
return 0;
}
