
#include <bits/stdc++.h> 
using namespace std;

int priority(char ch)
{
	if(ch=='+' || ch=='-') return 1;
	else if (ch=='*' || ch=='/') return 2;
	else if(ch=='^') return 3;
}

string infixToPostfix(string exp){
	

	stack<char> st;
	string ans="";

	for(int i=0;i<exp.size();i++)
	{
		char ch = exp[i];

		if(ch=='(') st.push(ch);

		else if(ch==')')
		{
			while(st.top() != '(')
			{
				ans += st.top();
				st.pop();
			}
			st.pop();
		}

		else if(ch=='+' || ch=='-'||ch=='*'|| ch=='/'|| ch=='^')
		{
			while(st.size()>0 && (priority(ch)<=priority(st.top())) && st.top()!='(')
			{
				ans += st.top();
				st.pop();
			}
			st.push(ch);
		}
		else
		{
			ans+= ch;
		}

	}

	while(st.size()>0)
		{
			ans += st.top();
			st.pop();
		}

	return ans;
}
