#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#define E "ERROR"
int main(int argc,char *argv[])
{
char input[81],c; 
char *alphabet = "abcdefghijklmnopqrstuvwxyz";
if (argc < 2 || argc > 4)
{
	puts(E);
}
if (!strcmp(argv[1],"-d"))
{
	char output[25][81];
	scanf(" %80[^\n]",input);
	int i, j;
	for (i = 0; i < 25; i++) for (j = 0; j < 81; j++) output[i][j] = 0;
	for (i = 0; (c = input[i]); i++)
	{
		if (!isalpha(c))
		{
			for (j = 0; j < 25; j++) output[j][i] = c;
			continue;
		}
		else
		{
			c -= 97;
		}
		for (j = 1; j <= 25; j++)
		{
			output[j - 1][i] = alphabet[(c + j) % 26];
		}
	}
	for (i = 0; i < 25; i++) 
	{
		printf("+%2d./-%2d.\t",i + 1,abs(i - 25));
		puts(output[i]);
	}
}
if (!strcmp(argv[1],"-e"))
{
	int i, posun = atoi(argv[2]);
	scanf("%80[^\n]",input);
	for (i = 0; (c = input[i]); i++ )
	{	
		if (!isalpha(c))
		{
			putchar(c);
			continue;
		}
		else
		{
			if (posun < 0) posun += 26;
			c -= 97;
			c = alphabet[(c + posun) % 26];
			putchar(c);
		}
	}
putchar('\n');
}
return 0;
}
