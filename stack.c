#include<stdio.h>
int a[10],top=-1,data;
void push(){
if(top==9)
	printf("\nThe stack is Full");
else {
printf("\nEnter the data");
scanf("%d",&data);
a[++top]=data;
}}
void pop(){
if(top==-1)
	printf("\nThe Stack is Empty");
else 
printf("\ntop=%d",a[top--]);
} 
int main(){
char choice;
do{
printf("\nEnter your choice 1.push 2.pop 3.top 4.isEmpty 5.Exit");
	scanf(" %ch ",&choice);
switch(choice){
	case '1':
		push();
		break;
	case '2':
		pop();
		break;
	case '3':
		printf("\ntop=%d",a[top]);
		break;
	case '4':
		if(top==-1)
			{printf("\nYES");}
		else 
			{printf("\nNO");}
		break;
	case '5':getchar();
	printf("\nThanks for your effort");
		getchar();
		return 0;
		break;
	default:
	printf("\nThanks for your effort");
	
}}while(1);
}