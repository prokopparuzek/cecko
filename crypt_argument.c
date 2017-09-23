#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
if(argc == 2){
    char *str = argv[1];
    int x,i;
    x = strlen(str);    
    for(i = 0;i < x;i++) printf("%c",*(str + i)+1);
    printf("\n");
}
return 0;    
}
