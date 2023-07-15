#include<bits/stdc++.h>
using namespace std;

string postfixToPrefix(string &s){
    stack<string> st;
	int sz = s.size();
	string ans;
	for(int i=0;i<sz;i++)
	{
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
		{
			string x = st.top();
			st.pop();
			string y = st.top();
			st.pop();

			ans = s[i]+y+x;

			st.push(ans);
		}
		else
		{
			string k = "";
			k+= s[i];
			st.push(k);
		}
	}
	if(!st.empty())
	ans = st.top();

	return ans;
}
