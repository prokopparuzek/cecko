#include<stdio.h>
char *p_1 = "one";
char *p_2 = "two";
char *p_3 = "three";
int main()
{
printf("%s %s %s\n",p_1,p_2,p_3);
printf("%s %s %s\n",p_1,p_2,p_3);
printf("%s %s %s\n",p_2,p_1,p_3);
printf("%s %s %s\n",p_2,p_3,p_1);
printf("%s %s %s\n",p_3,p_1,p_2);
printf("%s %s %s\n",p_3,p_2,p_1);
return 0;
}
