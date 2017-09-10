#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define E "ERROR"
void nuluj(char pole[][251]);
int main(int argc,char *argv[])
{
char in[251];
int i,j,k;
char decrypt[25][251];
char *alphabet = "abcdefghijklmnopqrstuvwxyz";
nuluj(decrypt);
if (argc != 2)
{
    puts(E);
    exit(1);
}
else
{
    if (!strcmp(argv[1],"-d"))
    {
        scanf("%250[^\n]s",in);
        for (i = 0; in[i]; i++)
        {
            if (!isalpha(in[i]))
            {
                for (k = 0; k < 25; k++) decrypt[k][i] = in[i];
                continue;         
            }
            else
            {
                for (j = 1; j <= 25; j++)
                {
                    char x = tolower(in[i]);
                    x -= 0x61;
                    x = alphabet[(x + j) % 26];
                    decrypt[j - 1][i] = x;    
                }
            }

        }
        for (i = 0; i < 25; i++) puts(decrypt[i]);
    }
}
return 0;    
}

void nuluj(char pole[][251])
{
int i;
for (i = 0; i < 26; i++) memset(pole[i],0,251);    
}
