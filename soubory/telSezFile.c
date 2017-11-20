#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void menu(void);
void nacti(char [][43], int*);
void vypis(char [][43], int);
void najdi(char [][43], int);
int main()
{
int sezCtrl = 0, in;
char seznam[100][43];
while (1)
{
menu();
in = getchar();
//getchar();
in -= 48;
switch (in)
{
    case 1:
        nacti(seznam,&sezCtrl);
        break;
    case 2:
        getchar();
        vypis(seznam,sezCtrl);
        break;
    case 3:
        getchar();
        najdi(seznam,sezCtrl);
        break;
    case 6:
        exit(0);
        break;
    default:
    puts("\nChybna Volba!\n");
    break;
        
}
}
return 0;   
}

void menu(void)
{
puts("Vyberte volbu, cislem");
puts("1)\tZadani jmen a cisel");
puts("2)\tVypsani seznamu");
puts("3)\tHledani cisel, podle jmen");
puts("4)\tUlozeni na disk");
puts("5)\tNacteni z disku");
puts("6)\t Konec");
}

void nacti(char seznam[][43], int *Ctrl)
{
    for (;;(*Ctrl)++)
    {
        puts("\nZadejte jmeno a cislo(jmeno:cislo)");
        puts("Jmeno max 30 znaku, cislo max 12 znaku");
        puts("Pro ukonceni zadavani zadejte prazdny radek\n");
        getchar();
        if (*Ctrl > 99)
        {
            puts("\nPlne pole pro seznam");
            puts("Ulozte seznam na disk\n");
            break;    
        }
        seznam[*Ctrl][0] = getchar();
        if (seznam[*Ctrl][0] == '\n') break;
        else
        scanf("%42[^\n]",&seznam[*Ctrl][1]);
    }
}

void vypis(char seznam[][43], int Ctrl)
{
    int i;
    putchar('\n');
    for (i = 0; i < Ctrl; i++)
    {
        printf("%s\n",&seznam[i]);    
    }
    putchar('\n');
}

void najdi(char seznam[][43], int Ctrl)
{
    auto int i, test = 0;
    auto char hJmeno[31], jmeno[31];
    puts("\nZadejte hledane jmeno\ndo 30 znaku\n");
    scanf("%30[^\n]",jmeno);
    getchar();
    puts("\nHledani...\n");
    for (i = 0; i < Ctrl; i++)
    {
        sscanf(seznam[i],"%30[^:]",hJmeno);
        if (!strcmp(hJmeno,jmeno))
        {
            puts(seznam[i]);
            test++;    
        }
    }
    printf("\nNalezeno %d vysledku\n\n",test);
}
