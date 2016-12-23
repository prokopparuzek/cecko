#include<stdio.h>
int main(int argc, char *argv[])
{
if(argc == 3){
	char *a = argv[1],*b = argv[2];
	int test = strcmp(a,b);
	if(test == 0) printf("jsou stejne\n");
	else if(test > 0) printf("a > b\n");
	else if(test < 0) printf("a < b\n");
}
return 0;
}
