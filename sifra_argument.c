#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
if(argc == 2){
	char *p = argv[1];
	int i,x = strlen(p); 
	for(i = 0;i < x;i++){
		printf("%c",*(p+i)+1);
	}
	printf("%c",'\n');
}
return 0;
}
