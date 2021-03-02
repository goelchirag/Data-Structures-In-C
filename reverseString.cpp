#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reverse(char c[],int n)
{
	stack<char> s;
	for(int i=0;i<n;i++)
	s.push(c[i]);
	for(int i=0;i<n;i++,s.pop())
	cout<<s.top();
}
int main(){
char s[51];
gets(s);
reverse(s,strlen(s));
}