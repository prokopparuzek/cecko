// nefunguje fseek()
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void genTaj(char [16], char*);
char ukaz[16];
char tajne[16];
char vstup;
int i,y,x,test,spravne;
FILE *fp;
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        puts("Spatny pocet argumentu");
        exit(2);    
    }
    genTaj(tajne, argv[1]);
	y = strlen(tajne);
	for(;i < y;i++){
		ukaz[i] = '_';
	}
	printf("%s\n",ukaz);
	for(x = 0; x < 15; x++)
	{
		if(spravne == y){
			printf("vyhral jsi\n");
			break;
		}
		printf("zadejte pismeno\n");
		scanf("%c",&vstup);
        getchar();
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

void genTaj(char tajne[16], char *file)
{
    srandom((unsigned int) time(NULL));
    if ((fp = fopen(file,"r")) == NULL)
    {
        printf("Nepdodarilo se otevrit soubor %s pro cteni\n",file);
        exit(1);    
    }
    fseek(fp,(random()),SEEK_SET);
    printf("%d\n",SEEK_CUR);
    fscanf(fp,"%*[^\n]");
    fgetc(fp);
    if (feof(fp)) rewind(fp);
    fscanf(fp,"%15[^\n]",tajne);
}
