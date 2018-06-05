#include<stdio.h>
#include<math.h>
#define deg(angle) (angle * M_PI / 180.0)
#define ST '#'
#define BL '.'
int main() {
int x, y;
for (y = 10; y >= -10; y--) {
    for (x = 0; x <= 720; x += 10) {
        if (y <= sin(deg(x)) * 10 && y >= 0 || y >= sin(deg(x)) * 10 && y <= 0) {
            putchar(ST);
        }
        else {
            putchar(BL);
        }

    }  
    printf("%3d",y);
    putchar('\n');
}
return 0;    
}
