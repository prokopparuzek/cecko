#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define NASOBEK1 5
#define NASOBEK2 3
// 137 řádků na 2 stránky
int main(int argc, char *argv[])
{
int i, j, x, y;
srand(atoi(argv[2]));
printf("Seed: %d\n",atoi(argv[2]));
if (argc == 3)
    for (i = 0; i < atoi(argv[1]); i++){
        for (j = 0; j < 3; j++){
            printf("%6d*%4d=\t",rand() % (int)pow(10, NASOBEK1), rand() % (int)pow(10, NASOBEK2));
        }
        putchar(10);
    }
else if (argc == 4)
    for (i = 0; i < atoi(argv[1]); i++){
        for (j = 0; j < 3; j++){
            x = rand() % (int)pow(10, NASOBEK1);
            y = rand() % (int)pow(10, NASOBEK2);
            printf("%6d*%4d=%10d", x, y, x*y);
        }
        putchar(10);
    }
else{
    puts("Chybny pocet argumentu!");
    exit(1);
}
return 0;    
}
