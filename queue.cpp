#include<bits/stdc++.h>
using namespace std;
queue<int> q;
void push(){
	int c;
	cin>>c;
	q.push(c);
}

void pop(){q.pop();}
void front(){
	cout<<q.front();
}
void back(){
	cout<<q.back();
}
void empty(){
	cout<<q.empty();
}

int main(){
char ch;
q.push(1);
do{
cout<<"Enter your Choice 1.push 2.pop 3.front 4.back 5.Empty 6.Exit\n";
scanf(" %c",&ch);
switch(ch){
	case '1':
		push();
		break;
	case '2':
		pop();
		break;
	case '3':	
		front();
		break;
	case '4':	
		back();
		break;
	case '5': 
		empty();
		break;
	case '6':
		return 0;
		break;
	default:
		printf("Thanks for your Effort\n");
	}
}while(1);
return 0;
}