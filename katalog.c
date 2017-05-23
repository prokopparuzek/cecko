// TODO:u hledani vypisuje pouze prvni objekt
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void vypis(void);
void zadani(int *i, char katalog[][3][51]);
int vypisKat (char katalog[][3][51]);
void printCara (int pocet);
int hledani (int co, char *str, char katalog[][3][51]);
void coHledat(char *str);
void vypisHledani(char katalog[][3][51],int co);
int main()
{
    char katalog[100][3][51];
    int i = 0;
    int volba;
    char hledanyStr[51];
    while(1)
    {
        volba = 0;
        vypis();
        scanf("%d",&volba);
        getchar();
        switch(volba)
        {
            case 1:
                zadani(&i,katalog);
                break;
            case 2:
                coHledat(hledanyStr);
                vypisHledani(katalog,hledani(1,hledanyStr,katalog));
                break;
            case 3:
                coHledat(hledanyStr);
                vypisHledani(katalog,hledani(0,hledanyStr,katalog));
                break;
            case 4:
                vypisKat(katalog);
                break;
            case 5:   
               exit(0);
               break;
            default:
                puts("prosím o správný znak!");
        }       
    }   
    return 0;    
}

void vypis()
{
    puts("Katalog knih:");
    puts("\t1. Zadání");
    puts("\t2. Hledání podle autora");    
    puts("\t3. Hledání podle názvu");    
    puts("\t4. Výpis celého katalogu");
    puts("\t5. Konec");    
    printf("Zadejte volbu: ");    
}

void zadani(int *i, char katalog[][3][51])
{
    int j, k, test = 1;;
    puts("!!maximalni delka knihy / autora je 50 znaků!!");        
    puts("zadejte data ve formátu\n název\n knihy autor\n vydavatel");
    puts("zadání ukončíte prázdným řádkem");
    for (j = *i; j < 100 && test; j++,(*i)++)
    {
        //j se zvetsuje
        for (k = 0; k < 3; k++)
        {
            if ((katalog[j][k][0] = getchar()) != '\n')
            {
                scanf("%49[^\n]s",&katalog[j][k][1]);
                getchar();
            }
            else
            {
                katalog[j][k][0] = 0;
                test = 0;
                (*i)--;
                puts("Ukončuji zadávání!");
                break;    
            }
        }
    }
}

int vypisKat (char katalog[][3][51])
{
    int i, j;
    printCara(80);
    for (i = 0; i < 100; i++)
    {
        for (j = 0; j < 3; j++)
         {
            if (katalog[i][j][0] == 0) return 0;
            if (j == 0) printf("název:\t\t");
            else if (j == 1) printf("autor:\t\t");
            else if (j == 2) printf("vydavatel:\t");
            printf("%s\n",katalog[i][j]);

         }
         printCara(80);
    }
}

void printCara (int pocet)
{
    int i;
    for (i = 0; i < pocet; i++) putchar('=');
    putchar('\n');    
}

int hledani (int co, char str[], char katalog[][3][51])
{
    int i;
    for (i = 0; katalog[i][co][0]; i++)
    {
        if (!strcmp(katalog[i][co],str)) return i;    
    }
    puts("Objekt se nepodařilo nalézt.");
}

void coHledat(char str[51])
{
    puts("Zadejte hledaný výraz.");
    puts("!!max 50 znaků!!");    
    scanf("%50[^\n]s",str);
}

void vypisHledani(char katalog[][3][51],int co)
{
    int i;
    printCara(80);
    for (i = 0; i < 3; i++)puts(katalog[co][i]);
    printCara(80);    
}
