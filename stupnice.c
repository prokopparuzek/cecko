#include<stdio.h>
#include<stdlib.h>

typedef struct {
    const char* durk[8];
    const char* durb[8];
    const char* molk[8];
    const char* molb[8];    
} stupnice;

int main() {
stupnice stup = {{"C", "G", "D", "A", "E", "H", "Fis", "Cis"}, {"C", "F", "B", "Es", "As", "Des", "Ges", "Ces"},\
{"a", "e", "h", "fis", "cis", "gis", "dis", "ais"}, {"a", "d", "g", "c", "f", "b", "es", "as"}};
unsigned long kostka;
FILE* random;
if ((random = fopen("/dev/random", "rb")) == NULL) {
    puts("Nepodarilo se otevrit /dev/random");
    exit(1);   
}
if (fread(&kostka, sizeof kostka, 1, random) != 1) {
    puts("chyba pri cteni");
    exit(2);    
}
fclose(random);
srand(kostka);
puts("Durová, septakord na pátém stupni.");
if (rand() % 2) {
    printf("%s dur\n", stup.durk[rand() % 8]);    
}
else {
    printf("%s dur\n", stup.durb[rand() % 8]);    
}
puts("Mollová, sedmý stupeň harmonické.");
if (rand() % 2) {
    printf("%s moll\n", stup.molk[rand() % 8]);    
}
else {
    printf("%s moll\n", stup.molb[rand() % 8]);    
}
return 0;
}
