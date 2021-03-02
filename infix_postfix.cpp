#include<bits/stdc++.h>
using namespace std;
//used to evaluate an expression in computer science compiler

int check_operator(char ch){
	if(ch=='('||ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^')
		return 1;
	else return 0;
}

int order(char ch){
	switch(ch){
	case '-':return 0;break;
	case '+':return 1;break;
	case '*':return 2;break;
	case '/':return 3;break;
	case '^':return 4;break;
	case '(':return -1;break;               
	default: return -1;}
}

int precedence(char a,char b){
	if(order(a)>=order(b))
		return 1;
	else 
		return 0;
}	

void solve(){
string s;
stack<char> temp;
getline(cin,s);
temp.push(' ');
for(int i=0;i<s.size();i++){
	if(check_operator(s[i])){
		if(precedence(s[i],temp.top()))
		temp.push(s[i]);
		else{
		while(!precedence(s[i],temp.top())){
		cout<<temp.top();temp.pop();
		temp.push(s[i]);
		}
		}
		}
	else if(s[i]==')'){
		while(temp.top()!='('){
		cout<<temp.top();
		temp.pop();}temp.pop();}
	else 
		cout<<s[i];	
	}
while(!temp.empty()){
	cout<<temp.top();temp.pop();}}
int main(){int t;
scanf(" %d ",&t);
while(t--)
solve();
return 0;
}