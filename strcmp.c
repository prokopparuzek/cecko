#include<stdio.h>
#include<string.h>
char text1[51],text2[51];
int main()
{
int i;
printf("zadej dva retezce porovnam je\n");
printf("zadej privni retezec do 50 znaku\n");
fgets(text1,51,stdin);
printf("zadej druhy retezec do 50 znaku\n");
fgets(text2,51,stdin);
i = strcmp(text1,text2);
printf("toto je rozdil %d\n",i);
return 0;
}
