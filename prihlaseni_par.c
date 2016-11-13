#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
if(argc == 2){
	if(!strcmp(argv[1],"heslo")) printf("prihlaseni probehlo v poradku\n");
	else printf("zkuste to znovu\n");
}
return 0;
}
