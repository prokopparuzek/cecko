#include<stdio.h>
#include<math.h>
#define deg(angle) (angle * M_PI / 180.0)
#define ST '#'
#define BL '.'
int main() {
double x, y;
//if (sin(deg(180.0)) <= 0.0) puts("Fuck?");
for (y = 1; y >= -1; y -= 0.1) {
    for (x = 0; x <= 360; x += 10) {
        if (y>0?(sin(deg(x)) >= y):(sin(deg(x)) <= y)) {
            //printf("%d%d",(int)(sin(deg(x)) * 10),y);
            putchar(ST);
        }
        else {
            //printf("%d%d",(int)(sin(deg(x)) * 10),y);
            putchar(BL);
        }

    }  
    printf("%4.1f",y);
    putchar('\n');
}
return 0;    
}
