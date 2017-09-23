#include<stdio.h>
#include<string.h>
char co[] = {'.',',',' '};
int kolik[3];
char vstup[50];
int a,b,delka;
int main()
{
    printf("zadejte retezec do 50 znaku\n");
    scanf(" %50[^\n]s",vstup);
    delka = strlen(vstup);
    for(a = 0;a < 3;a++){
        for(b = 0;b < delka;b++){
            if(vstup[b] == co[a]) kolik[a]++;
        }
    }
    printf("%d tecek\n%d carek\n%d mezer\n",kolik[0],kolik[1],kolik[2]);
    return 0;    
}
