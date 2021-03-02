#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;};
struct node *a=NULL,*b=NULL,*temp=NULL,*t=NULL;
void insert(){
	temp=(struct node*)malloc(sizeof(struct node));
	printf(" Enter the Value to be inserted");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(a==NULL)
	{a=temp;
	b=a;
	}else{
	b->link=temp;
	b=temp;}}
void reverse(struct node*nn,struct node*prev){
if(nn!=NULL){
	if(nn->link==NULL)temp=nn;
	reverse(nn->link,nn);
	nn->link=prev;	
	}
}
void delete(){
	int data;
	printf("Enter the Element to be deleted");
	scanf("%d",&data);
	temp=a;
	t=a;
	while(temp!=NULL)
	{
	     if(temp->data==data){
		if(temp==a){
		if(temp->link==NULL){
			free(temp);
			a=NULL;	}
			else{
			a=temp->link;
			free(temp);}
		}
	else{
		t->link=temp->link;
		free(temp);}
		break;
		}
	else{t=temp;	
	temp=temp->link;}
	}
}

void display(){temp=a;
	if(temp==NULL)
		printf("The list is empty");
	else{
	while(temp!=NULL){
	printf("%d-->",temp->data);
	temp=temp->link;}
	}
}
void main(){
char ch;
	do{
	printf("\nEnter Your choice 1.Insert 2.Delete 3.Display 4.Exit 5.reverse");
	scanf(" %ch ",&ch);
	switch(ch){
	case '1':
		insert();
		break;
	case '2':
		delete();
		break;
	case '3' :
		display();
		break;
	case '5':
		reverse(a,NULL);
		a=temp;
		break;
	default:
		printf("\nThanks for your Effort");
	}
	}while(ch!='4');
}