#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void menu(void);
void nacti(char [][44], int*);
void vypis(char [][44], int);
void najdi(char [][44], int);
void uloz(char [][44], int);
void precti(char [][44], int*);
int main()
{
int sezCtrl = 0, in;
char seznam[100][44];
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
    case 4:
        getchar();
        uloz(seznam,sezCtrl);
        break;
    case 5:
        getchar();
        precti(seznam,&sezCtrl);
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

void nacti(char seznam[][44], int *Ctrl)
{
    for (;;(*Ctrl)++)
    {
        puts("\nZadejte jmeno a cislo(jmeno:cislo)");
        puts("Jmeno max 30 znaku, cislo max 12 znaku");
        puts("Pro ukonceni zadavani zadejte prazdny radek\n");
        getchar();
        if (*Ctrl > 99)
        {
            puts("\nPlne pole pro seznam\n");
            break;    
        }
        seznam[*Ctrl][0] = getchar();
        if (seznam[*Ctrl][0] == '\n') break;
        else
        scanf("%42[^\n]",&seznam[*Ctrl][1]);
    }
}

void vypis(char seznam[][44], int Ctrl)
{
    int i;
    putchar('\n');
    for (i = 0; i < Ctrl; i++)
    {
        printf("%s\n",&seznam[i]);    
    }
    putchar('\n');
}

void najdi(char seznam[][44], int Ctrl)
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

void uloz(char seznam[][44], int Ctrl)
{
    FILE *fp;
    int i;
    char* file = "telefoni_seznam.txt";
    if ((fp = fopen(file,"w")) == NULL)
    {
        printf("\nNelze otevřít soubor %s pro zápis\n",file);
        exit(1);    
    }
    for (i = 0; i < Ctrl; i++)
    {
        if (fprintf(fp,"%s\n",seznam[i]) == EOF)
        {
            printf("Chyba pri zapisu do souboru %s\n",file);
            exit(2);    
        }
    }
}

void precti(char seznam[][44], int* Ctrl)
{
    FILE *fp;
    int i;
    char* file = "telefoni_seznam.txt";
    if ((fp = fopen(file,"r")) == NULL)
    {
        printf("\nNelze otevřít soubor %s pro zápis\n",file);
        exit(3);    
    }
    for (i = 0; i < 100; i++)
    {
        fscanf(fp,"%43[^\n]",seznam[i]);
        fgetc(fp);
        if (feof(fp))
        {
            break;  
        }
    }
    seznam[i][0] = 0;
    if(i == 99) puts("\nMoc kontaktu\n");
    *Ctrl = i;
}
