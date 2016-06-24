#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char s[256];
  int i;

  fgets(s, 256, stdin);
  i = atoi(s);
  if (!i)
    puts("Chyba nebo nula");
  else
    printf("Korektně zadáno číslo %d\n", i);
  return 0;
}
