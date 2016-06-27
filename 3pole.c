#include<stdio.h>
int pole[3][3][3];
int a,b,c,v=1,x;
int main(){
	for(a=0;a<3;a++){
		for(b=0;b<3;b++){
			for(c=0;c<3;c++){
				pole[a][b][c] = v;
				v++;
				x +=v;
				
			}
		}
	}
	for(a=0;a<3;a++){
		printf("\n");
		for(b=0;b<3;b++){
			printf("\n");
			for(c=0;c<3;c++){
				printf("%d ",pole[a][b][c]);
			}
		}
	}
	printf("\n%d\n",x);
	return 0;
}
