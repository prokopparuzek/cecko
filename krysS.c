#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
char priklad[2][6];
int i, j, delen, del;
for (i = 0; i < 32; i++){
    for (j = 0; j < 4; j++){
        memset(priklad[0],0,6);
        memset(priklad[1],0,6);
        scanf(" %[0-9]: %[0-9]=",priklad[0],priklad[1]);
        getchar();
        delen = atoi(priklad[0]);
        del = atoi(priklad[1]);
        printf("%5i (%2d)\t",delen / del, delen % del);
    }
    putchar('\n');
}
return 0;
}
