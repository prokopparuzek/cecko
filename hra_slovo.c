#include<stdio.h>
#include<string.h>
char tajne[51] = {"ahoj bimbo"};
char ukaz[51];
char vstup;
int i,y,x,test,ln,spravne;
int main()
{
	y = strlen(tajne);
	for(;i < y;i++){
		ukaz[i] = '_';
	}
	printf("%s\n",ukaz);
	for(;x < 15;x++)
	{
		if(spravne == y){
			printf("vyhral jsi\n");
			break;
		}
		printf("zadejte pismeno\n");
		scanf("%c",&vstup);
		scanf("%c",&ln);
		test = 0;
		for(i = 0;i < y;i++){
			if(vstup == tajne[i]){
				ukaz[i] = tajne[i];
				test = 1;
				spravne++;	
			}
		}
		if(test) printf("spravne mas jeste %d pokusu\n",15-x);
		else if(!test) printf("spatne mas jeste %d pokusu\n",15-x);
		printf("%s\n",ukaz);
	}
	if(spravne < y) printf("prohral jsi, zkus to znovu\n");
	return 0;
}
