#include<stdio.h>
#include<stdlib.h>
int *a,front,top,i,n,num; 

void push(){	
	
	 if((top+1)%n!=front){
		printf("\nENter the number to be entered");
		scanf("%d",&num);
		
		if(front==-1)
		{a[(++top)%n]=num;front++;}
		else{
		i=top;
		while(a[i]<=num&&i>=front)
		a[(i+1)%n]=a[(i--)%n];
		a[(++i)%n]=num;top++;
		}
	}
	else
		printf("\nThe Queue is Full\n");
	}
void pop(){
	if(front==-1)
	printf("\nThe Queue is Empty\n");
	else {
		printf("\nDeleted:%d\n",a[front]);
	if(front==top)
		front=top=-1;
	else 
		front++;}	
}

void display(){
	if(front==-1)
	printf("The Queue is Empty\n");
	else
	for(int i=front;i<=top;i++)
		printf("%d\n",a[i%n]);	
}

int main(){
int size;
char ch;
printf("Enter The Maximum Size of your queue");
scanf("%d",&size);
n=size;
a=(int*)malloc(size*sizeof(int));
front=top=-1;
do{
printf("Enter your Choice 1.push 2.pop 3.display 4.front 5.top 6.empty 7.exit");
	scanf(" %c",&ch);
switch(ch){
	case '1':
		push();
		break;
	case '2':
		pop();
		break;
	case '3':
		display();
		break;
	case '4':
		front!=-1?printf("\n%d\n",a[front]):printf("\nEmpty\n");
		break;
	case '5':
		front!=-1?printf("\n%d\n",a[top]):printf("\nEmpty\n");
		break;
	case '6':
		front==-1?printf("YES\n"):printf("NO\n");
		break;
	case '7':
		return 0;
	default:
		printf("THanks for your response\n");
	}	
}while(1);
}