#include<stdio.h>
#include<string.h>
char text[51],text1[51] = "ahoj";
int main()
{
printf("zadejte text do 30 znaku\n");
fgets(text,31,stdin);
strcat(text1,text);
printf(text1);
return 0;
}
