#include<stdio.h>
#include<string.h>
void cryper();

void decryper();
char vstup[51];
char vystup[51];
int i,delka,test,x,y;
char znak[9];
int main()
{
    printf("zadejte retezec do 50 znaku\n");
    scanf(" %50[^\n]s",vstup);
    delka = strlen(vstup);
    y = delka;
    y--;
    printf("cryper or decryper\n");       
    scanf("%8s",znak);
    if (!strcmp(znak,"cryper")) cryper();
    else if(!strcmp(znak,"decryper")) decryper();
    else printf("ERROR\n");
    printf("%s\n",vystup);
    return 0;
}

void cryper()
{
    for(i = 0;i < delka;i++){
        if(!test){
            vystup[i] = vstup[x];
            x += 1;
            test = 1;
        }
        else if(test){
            vystup[i] = vstup[y];
            y -= 1;
            test = 0;
        }
    }
}

void decryper()
{
    for(i = 0;i < delka;i++){
        if(!test){
            vystup[x] = vstup[i];
            x++;
            test = 1;
        }    
        else if(test){
            vystup[y] = vstup[i];
            y--;
            test = 0;
        }
    }        
}
