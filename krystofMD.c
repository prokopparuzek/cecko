#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#define DELENEC 5
#define DELITEL 2
// 137 řádků na 2 stránky
int main(int argc, char *argv[])
{
int i, j, del, delen;
srand(atoi(argv[2]));
printf("Seed: %d\n",atoi(argv[2]));
if (argc == 3)
    for (i = 0; i < atoi(argv[1]); i++){
        for (j = 0; j < 3; j++){
            del = rand() % (int)pow(10, DELITEL);
            del = del?del:16;
            printf("%6d:%3d=\t",rand() % (int)pow(10, DELENEC),del);
        }
        putchar(10);
    }
else if (argc == 4)
    for (i = 0; i < atoi(argv[1]); i++){
        for (j = 0; j < 3; j++){
            del = rand() % (int)pow(10, DELITEL);
            del = del?del:16;
            delen = rand() % (int)pow(10, DELENEC);
            printf("%6d:%3d=%6d (%3d)\t",delen,del,delen / del, delen % del);
        }
        putchar(10);
    }
else{
    puts("Chybny pocet argumentu!");
    exit(1);
}
return 0;    
}
