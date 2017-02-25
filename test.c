#include <stdio.h>
#include <stdlib.h>
int main()
{
double x = -20.85;
unsigned char y = 0;
y = x + 20;
y = y << 2;
char a = (int)(x * 100) % 100;
a = abs(a);
char des = -1;
if (a < 25) des = 0;
else if (a < 50) des = 1;
else if (a < 75) des = 2;
else if (a < 100 ) des = 3;
y = y ^ des;
char zaklad = (y >> 2) - 20;
char deset = y & 0b00000011;
return 0;
}
