#include<stdio.h>
unsigned int i,y=1;
int x;
int main()
{
    printf("zadej cislo vypocitam faktorial\n");
    scanf("%d",&x);
    if(x < 0 || x > 33){
        printf("ERROR\n");
        return 0;
    }
    for(i=1;i<=x;i++)y*=i;
    printf("%d! = %lu\n",x,y);
    return 0;
}
