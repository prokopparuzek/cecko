#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
if(argc == 2){
	char *heslo = "tajne";
	if(!strcmp(heslo,argv[1])) printf("vstupte\n");
	else printf("pristup odepren\n");
}
return 0;
}
