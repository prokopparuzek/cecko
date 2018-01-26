#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int i, j, del, delen;
srand(atoi(argv[2]));
printf("Seed: %d\n",atoi(argv[2]));
if (argc == 3)
    for (i = 0; i < atoi(argv[1]); i++){
        for (j = 0; j < 3; j++){
            del = rand() % 1000;
            del = del?del:16;
            printf("%6d:%3d=\t",rand() % 1000000,del);
        }
        putchar(10);
    }
else if (argc == 4)
    for (i = 0; i < atoi(argv[1]); i++){
        for (j = 0; j < 3; j++){
            del = rand() % 1000;
            del = del?del:16;
            delen = rand() % 1000000;
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
