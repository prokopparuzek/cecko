#include<stdio.h>
#include<string.h>
char text[51];
char text1[51];
int main()
{
printf("zadejte text do 50 znaku\n");
fgets(text,51,stdin);
strcpy(text1,text);
printf(text1);
return 0;
}
