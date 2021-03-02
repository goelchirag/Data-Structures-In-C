#include<bits/stdc++.h>
using namespace std;
int solve(){
string s;int i=0,j=0;
stack<char> st;
getline(cin,s);
for(i=0;i<s.size();i++)
	switch(s[i]){
	case '{':
	case '[':
	case '(':st.push(s[i]);
		break;
	case ']':if(!st.empty()&&st.top()=='[')
			st.pop();
		else
			return 0;
		break;
	case '}': if(!st.empty()&&st.top()=='{')
			st.pop();
		else
			return 0;
		break;
	case ')':if(!st.empty()&&st.top()=='(')
			st.pop();
		else
			return 0;
		break;
	default:return 0;
	}
if(st.empty())
	return 1;
else 
	return 0;
}
int main(){int t;
scanf("%d ",&t);
while(t--){
if(solve())
printf("YES\n");
else
printf("NO\n");
}
return 0;}