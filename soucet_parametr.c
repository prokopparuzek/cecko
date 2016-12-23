#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
if(argc == 4){
	int a = 0,b = 0;
	char *x = argv[1];
	a = atoi(argv[2]);
	b = atoi(argv[3]);
	if(!strcmp(x,"+")) printf("%d\n",a + b);
	else if(!strcmp(x,"-")) printf("%d\n",a - b);
	else if(!strcmp(x,"*")) printf("%d\n",a * b); //nutnost pouzit \*
	else if(!strcmp(x,"/")) printf("%d\n",a / b);
	else printf("ERROR\n");
}
return 0;
}
