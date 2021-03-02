#include<stdio.h>
void main(){
int a=100030;
char *b=(char *)(&a);
printf("%d",*b);
getch();
}
