#include<stdio.h>
#include<stdlib.h>
int main()
{
float pole[5] = {1.78, 2.908, 87.9854, 123.789, 567.546};
FILE *fp;
const char *file = "test.fl";
int i;
if ((fp = fopen(file,"wb")) == NULL){
    puts("Nelze otevrit soubor pro zapis");
    exit(1);    
}
if (fwrite(pole,sizeof(float),5,fp) != 5) {
    puts("Chyba pri zapisu");
    exit(2);
}
fclose(fp);
if ((fp = fopen(file,"rb")) == NULL){
    puts("Soubor nelze otevrit pro cteni");
    exit(3);
}
for (i = 0; i < 5; i++) pole[i] = -1;
if (fread(pole,sizeof(float),5,fp) != 5){
    puts("Chyba pri cteni");
    exit(4);
}
fclose(fp);
for (i = 0; i < 5; i++){
    printf("%f\n",pole[i]);
}
return 0;    
}
