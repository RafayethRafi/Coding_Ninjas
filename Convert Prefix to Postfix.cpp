string preToPost(string s) {
    stack<string> st;

	string ans;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^')
		{
			string x = st.top();
			st.pop();
			string y = st.top();
			st.pop();

			ans = x+y+s[i];

			st.push(ans);
		}
		else
		{
			string k = "";
			k+= s[i];
			st.push(k);
		}
	}

	return ans;
}
