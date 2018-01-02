#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int i, j, del, delen;
srand(time(NULL));
if (argc == 2)
    for (i = 0; i < atoi(argv[1]); i++){
        for (j = 0; j < 3; j++){
            del = rand() % 100;
            del = del?del:16;
            printf("%5d:%2d=\t",rand() % 100000,del);
        }
        putchar(10);
    }
else if (argc == 3)
    for (i = 0; i < atoi(argv[1]); i++){
        for (j = 0; j < 3; j++){
            del = rand() % 100;
            del = del?del:16;
            delen = rand() % 100000;
            printf("%5d:%2d=%5d (%2d)\t",delen,del,delen / del, delen % del);
        }
        putchar(10);
    }
else{
    puts("Chybny pocet argumentu!");
    exit(1);
}
return 0;    
}
