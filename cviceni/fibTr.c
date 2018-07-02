/*
funguje pouze u jednocifernych cisel
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int *line(int *a, int *b, int count);
void print(int *line, int ident, int count);

int main(int argc, char **argv) {
if (argc != 2) {
    puts("Chybny pocet argumentu!!!\nzadejte pocet pater");
    exit(1);    
}
int *line1 = malloc(atoi(argv[1]) * sizeof(int));
int *line2 = malloc(atoi(argv[1]) * sizeof(int));
int *swap;
*line1 = 1;
int i = atoi(argv[1]);
while(i-- > 0) {
    print(line1, i, atoi(argv[1]));
    line(line1, line2, atoi(argv[1]));    
    swap = line1;
    line1 = line2; 
    line2 = swap;
}
free(line1);
free(line2);
return 0;    
}

int *line(int *a, int *b, int count) {
memset(b,0,count);
int i;
for (i = 0; i < count; i++) {
    b[i] = a[i] + (i <= 0 ? 0: a[i - 1]);    
}
return b;
}

void print(int *line, int ident, int count) {
int i;
for (i = 0; i < ident; i++)
    putchar(' ');
for (i = 0; i < count;i++) {
    if (line[i] == 0)
        break;
    else
        printf("%d ",line[i]);    
}    
putchar('\n');
}
