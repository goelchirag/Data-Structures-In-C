#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *top=NULL;
void push(){}
void pop(){}

int main(){
top=(struct node*)malloc(sizeof(struct node));
top->data=-1;
char choice;
printf("\n%d",top->data);
do{
printf("\nEnter your choice");
scanf(" %ch ",&choice);
switch(choice){
case '1':
	push();
	break;
case '2':
	pop();
	break;
case '3':
	printf("\nTop=%d",top->data);
	break;
case '4':
	if(top->data==-1)
	printf("\nYES");
	else 
	printf("\nNO");
	break;
case '5':getchar();
	printf("\nThanks for Using Us");
	getchar();
	return 0;
default:
	printf("\nThanks for your Effort");
}}while(1);
}