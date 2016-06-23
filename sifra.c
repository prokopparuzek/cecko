#include<stdio.h>
char text[81];
char crypt[81];
int i;
char x;
int main()
{
printf("zadejte text do 80 znaku\n");
fgets(text,81,stdin);
for(i;i<=81;i++){
x = text[i];
x +=1;
crypt[i] = x;
}
printf("%s\n",crypt);
return 0;
}
