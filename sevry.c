//dodelat for zmenit
#include<stdio.h>
int servery[][2]={
1,8,
2,87,
3,9
};
int server, i;
int main(){
printf("zadejte cislo serveru\n");
scanf("%d",&server);
if(server>3){
printf("ERROR\n");
return 0;
}
for(i=1;i<=3;i++){
	if(i==server)printf("je pripojeno %d uzivatelu\n",servery[i-1][1]);
}
return 0;
}
