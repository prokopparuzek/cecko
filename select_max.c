#include<stdio.h>
int vstup[10];
int vystup[10][2];
int i;
char bb;
int je_tam(int a);
void pricti_1(int a);
void zaloz(int a);
int max(void);
int main()
{
    printf("zadejte 10 cisel\n");
    for(i = 0;i<10;i++){
        scanf("%d",&vstup[i]);
        printf("ctu\n");
    }    
    printf("konec\n");
    for(i=0;i<10;i++){
        if(je_tam(vstup[i])) {
            pricti_1(vstup[i]);
        }
        else{
            zaloz(vstup[i]);
        }
    }
    i = max();
    printf("nejvice se vyskytuje cislo %d a to %d krat\n",vystup[i][0],vystup[i][1]);
    return 0;    
}

int je_tam(int a)
{
    // scanf("%c",&bb);
    //printf("Začátek a=%d\n",a);
    int y=0;
    for(y;y<10;y++){
        if(vystup[y][0] == a){
            //printf("je tam a=%d, vystup=%d\n",a,vystup[y][0]);
            return 1;
        }
        else{ 
            //printf("neni tam a=%d, vystup=%d\n",a,vystup[y][0]);
        }
    }
    return 0;
}

void pricti_1(int a)
{
    int y=0;
    for(y=0;y<10;y++){
        if(vystup[y][0] == a){
            ++vystup[y][1];
            break;
        }    
    }
}

void zaloz(int a)
{
    int y=0;
    for(y;y<10;y++){
        if(vystup[y][0] == 0){
            vystup[y][0] = a;
            vystup[y][1] = 1;
            break;
        }    
    }    
}

int max()
{
    int y=0,i=0,a=0,x=0;
    a = vystup[0][1];
    for(i=0;i<10;i++){
        if(vystup[i][1] > a){
            a = vystup[i][1];
            y=i;
        }
    }    
    return y;
}
