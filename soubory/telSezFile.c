#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void menu(void);
void nacti(char  [][43],int*);
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
        
}
}
return 0;   
}

void menu(void)
{
puts("Vyberte volbu, cislem");
puts("1)\tZadani jmen a cisel");
puts("2)\tVypsani seznamu");
puts("3)\tHledani cisel");
puts("4)\tUlozeni na disk");
puts("5)\tNacteni z disku");
puts("6)\t Konec");
}

void nacti(char seznam[][43], int *Ctrl)
{
    for (;;(*Ctrl)++)
    {
        puts("Zadejte jmeno a cislo(jmeno:cislo)");
        puts("Jmeno max 30 znaku, cislo max 12 znaku");
        puts("Pro ukonceni zadavani zadejte prazdny radek");
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
