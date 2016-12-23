#include<stdio.h>
#include<string.h>
char text[81];
char crypt[81];
int i;
char x;
int main()
{
printf("zadejte text do 80 znaku\n");
scanf("%80[^\n]s",text);
for(i;i < strlen(text);i++){
x = text[i];
x +=1;
crypt[i] = x;
}
printf("%s\n",crypt);
return 0;
}
