#include <stdio.h>

int chyby;
int odpoved,a,b;
int main(void) {
	for(a = 1;a <11;a++)
	{
		for(b = 1;b<11;b++)
		{
			odpoved = 0;
			printf("kolik je %d krát %d\n",a,b);
			scanf("%d",&odpoved);
			if(odpoved == a*b)printf("spravne\n");
			else
			{
				printf("spatne, spravna odpoved je %d\n",a*b);
				chyby++;
			}
		}
		printf("mas %d chyb\n",chyby);
	}
	return 0;
}

