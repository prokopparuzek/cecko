#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
unsigned long long int i, hos = 0;
for (i = 0; i < 100; i++){
   if (system("./a.out 100 50 50") == 0) hos++; 
}
printf("Hospoda: %llu\n",hos);
printf("Doma: %llu\n",1000 - hos);
return 0;
}
