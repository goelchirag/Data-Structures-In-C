#include<stdio.h>
void toh(char A,char B,char C,int n){
if(n==1)
	printf("\n %c --> %c \n",A,C);
else{
	toh(A,C,B,n-1);
	printf("\n %c --> %c \n",A,C);
	toh(B,A,C,n-1);}
}
void main(){int n;
char ch;
do{printf("\nEnter your choice 1.use 2. exit");
scanf(" %ch ",&ch);
if(ch=='1'){
printf("\nEnter the Number of Elements");
scanf("%d",&n);
toh('a','b','c',n);}
else
printf("\nThank you for your effort");
}while(ch!='2');
getchar();
}