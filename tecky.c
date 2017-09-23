#include<stdio.h>
#include<string.h>
char string[80];
int i,delka;
int main()
{
    printf("zadejte retezec kratsi nez 80 znaku\n");
    scanf(" %79[^\n]s",string);
    delka = strlen(string);
    for(i=delka;i<80;i++){
        strcat(string,".");
    }    
    printf("%s\n",string);
    return 0;
}
