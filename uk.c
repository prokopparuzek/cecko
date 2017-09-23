#include<stdio.h>
int a,*pa;
int main(){
    a = 765;
    pa=&a;
    printf("%d,%p\n",*pa,pa);
    return 0;    
}
