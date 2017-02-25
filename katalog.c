#include<stdio.h>
#include<stdlib.h>
void vypis(void);
void zadani(int *i, char katalog[][2][101]);
int main()
{
    char katalog[500][2][101];
    int i = 0;
    while(1)
    {
        int volba = 0;
        vypis();
        scanf("%d",&volba);
        switch(volba)
        {
            case 1:
                zadani(&i,katalog);
                break;
            case 5:   
               exit(0);
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
    puts("Zadejte volbu:");    
}

void zadani(int *i, char katalog[][2][101])
{
    int j;
    puts("!!maximalni delka knihy / autora je 100 znaků!!");        
    puts("zadejte data ve formátu název_knihy autor");
    puts("zadání ukončíte prázdným řádkem");
    for(j = *i; j < 500; j++)
    {
        scanf("%[\n]100s",katalog[j][0]);
        if ( *katalog[j][0] == '\n')
        {
            *i = --j;
            break;
        }
        else
            scanf("%100s",katalog[j][1]);              
    }
}
