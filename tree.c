#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *llink,*rlink;
}*start=NULL;
int choice;
void insert(struct node *temp){
printf("\nEnter the data");
scanf("%d",&temp->data);
temp->llink=NULL;
temp->rlink=NULL;
printf("Do you want left node ");
scanf("%d",&choice);
if(choice==1){temp->llink=(struct node*)malloc(sizeof(struct node));
	insert(temp->llink);	
}
printf("\nDo you want right node");
scanf("%d",&choice);
if(choice==1)
	{temp->rlink=(struct node*)malloc(sizeof(struct node));
	insert(temp->rlink);
}
}
void inorder(struct node* temp){
if(temp!=NULL)
	{printf("%d-->",temp->data);
	inorder(temp->llink);
	inorder(temp->rlink);}
}
void preorder(struct node*temp){
if(temp!=NULL)
{preorder(temp->llink);	
printf("%d-->",temp->data);
	preorder(temp->rlink);
	}
}
void postorder(struct node*temp){
if(temp!=NULL){
postorder(temp->rlink);
printf("%d-->",temp->data);
postorder(temp->llink);
}}
int main(){
int ch;
do{
printf("\nEnter Your Choice 1.insert 2.Inorder 3.Preorder 4.Postorder 5.Exit");
scanf("%d",&ch);
switch(ch){
case 1:
	start=(struct node*)malloc(sizeof(struct node));
	insert(start);
	break;
case 2:
	inorder(start);
	break;
case 3:
	preorder(start);
	break;
case 4:
	postorder(start);
	break;
case 5:
	printf("Thanks You");
	getchar();
	return 0;
	break;
default:
	printf("\nThanks For Your Response");
}}while(1);
}